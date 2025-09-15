// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>

#include "validate_jtc_parameters.hpp"


namespace joint_trajectory_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::vector<std::string> joints = {};
        std::vector<std::string> command_joints = {};
        std::vector<std::string> command_interfaces = {};
        std::vector<std::string> state_interfaces = {};
        bool allow_partial_joints_goal = false;
        bool open_loop_control = false;
        bool interpolate_from_desired_state = false;
        bool allow_integration_in_goal_trajectories = false;
        bool set_last_command_interface_value_as_state_on_activation = true;
        double action_monitor_rate = 20.0;
        std::string interpolation_method = "splines";
        bool allow_nonzero_velocity_at_trajectory_end = false;
        double cmd_timeout = 0.0;
        struct Gains {
            struct MapJoints {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp = 0.0;
                double ff_velocity_scale = 0.0;
                double u_clamp_max = std::numeric_limits<double>::infinity();
                double u_clamp_min = -std::numeric_limits<double>::infinity();
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                std::string antiwindup_strategy = "legacy";
                double tracking_time_constant = 0.0;
                double error_deadband = 0.0;
            };
            std::map<std::string, MapJoints> joints_map;
        } gains;
        struct Constraints {
            double stopped_velocity_tolerance = 0.01;
            double goal_time = 0.0;
            struct MapJoints {
                double trajectory = 0.0;
                double goal = 0.0;
            };
            std::map<std::string, MapJoints> joints_map;
        } constraints;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool allow_partial_joints_goal = false;
        bool open_loop_control = false;
        bool interpolate_from_desired_state = false;
        bool allow_integration_in_goal_trajectories = false;
        bool set_last_command_interface_value_as_state_on_activation = true;
        double action_monitor_rate = 20.0;
        bool allow_nonzero_velocity_at_trajectory_end = false;
        double cmd_timeout = 0.0;
        struct Constraints {
            double stopped_velocity_tolerance = 0.01;
            double goal_time = 0.0;
        } constraints;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("joint_trajectory_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.allow_partial_joints_goal = params.allow_partial_joints_goal;
      output.open_loop_control = params.open_loop_control;
      output.interpolate_from_desired_state = params.interpolate_from_desired_state;
      output.allow_integration_in_goal_trajectories = params.allow_integration_in_goal_trajectories;
      output.set_last_command_interface_value_as_state_on_activation = params.set_last_command_interface_value_as_state_on_activation;
      output.action_monitor_rate = params.action_monitor_rate;
      output.allow_nonzero_velocity_at_trajectory_end = params.allow_nonzero_velocity_at_trajectory_end;
      output.cmd_timeout = params.cmd_timeout;
      output.constraints.stopped_velocity_tolerance = params.constraints.stopped_velocity_tolerance;
      output.constraints.goal_time = params.constraints.goal_time;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;
      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain :math:k_p for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral gain :math:k_i for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain :math:k_d for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral clamp. Symmetrical in both positive and negative direction.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Feed-forward scaling :math:k_{ff} of velocity";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.ff_velocity_scale);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.ff_velocity_scale = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_max");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Upper output clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.u_clamp_max);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.u_clamp_max = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_min");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Lower output clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.u_clamp_min);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.u_clamp_min = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_max");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Upper integral clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp_max);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp_max = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_min");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Lower integral clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp_min);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp_min = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the anti-windup strategy. Options: 'back_calculation', 'conditional_integration', 'legacy' or 'none'. Note that the 'back_calculation' strategy use the tracking_time_constant parameter to tune the anti-windup behavior.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup_strategy);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gains.__map_joints.antiwindup_strategy': {}", validation_result.error()));
          }
          entry.antiwindup_strategy = param.as_string();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "tracking_time_constant");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the tracking time constant for the 'back_calculation' strategy. If set to 0.0 when this strategy is selected, a recommended default value will be applied.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.tracking_time_constant);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.tracking_time_constant = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "error_deadband");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Is used to stop integration when the error is within the given range.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.error_deadband);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.error_deadband = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.constraints.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance during movement.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.trajectory);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.trajectory = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.constraints.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance at the goal position.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.goal);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.goal = param.as_double();}

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = size_gt<std::string>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interfaces")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = size_gt<std::string>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration", "effort"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = joint_trajectory_controller::command_interface_type_combinations(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_interfaces")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = size_gt<std::string>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = joint_trajectory_controller::state_interface_type_combinations(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_partial_joints_goal")) {
            updated_params.allow_partial_joints_goal = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "open_loop_control")) {
            updated_params.open_loop_control = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interpolate_from_desired_state")) {
            updated_params.interpolate_from_desired_state = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_integration_in_goal_trajectories")) {
            updated_params.allow_integration_in_goal_trajectories = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "set_last_command_interface_value_as_state_on_activation")) {
            updated_params.set_last_command_interface_value_as_state_on_activation = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "action_monitor_rate")) {
            if(auto validation_result = gt_eq(param, 0.1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.action_monitor_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interpolation_method")) {
            if(auto validation_result = one_of<std::string>(param, {"splines", "none"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.interpolation_method = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_nonzero_velocity_at_trajectory_end")) {
            updated_params.allow_nonzero_velocity_at_trajectory_end = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cmd_timeout")) {
            updated_params.cmd_timeout = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "constraints.stopped_velocity_tolerance")) {
            updated_params.constraints.stopped_velocity_tolerance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "constraints.goal_time")) {
            if(auto validation_result = gt_eq(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.constraints.goal_time = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      // update dynamic parameters
      for (const auto &param: parameters) {
        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].p = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].i = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].d = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].i_clamp = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].ff_velocity_scale = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_max");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].u_clamp_max = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_min");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].u_clamp_min = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_max");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].i_clamp_max = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_min");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].i_clamp_min = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
            if (param.get_name() == param_name) {
                if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
                  !validation_result) {
                    return rsl::to_parameter_result_msg(validation_result);
                }

                updated_params.gains.joints_map[value_1].antiwindup_strategy = param.as_string();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "tracking_time_constant");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].tracking_time_constant = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "error_deadband");
            if (param.get_name() == param_name) {

                updated_params.gains.joints_map[value_1].error_deadband = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
            if (param.get_name() == param_name) {

                updated_params.constraints.joints_map[value_1].trajectory = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.joints) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
            if (param.get_name() == param_name) {

                updated_params.constraints.joints_map[value_1].goal = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

      }
      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names of the system";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.joints);
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names to control. If left empty, joints will be used. This parameters can be used if: \n    \n     * JTC is used in a controller chain where command and state interfaces don't have same names.\n    * If the number of command joints is smaller than the degrees-of-freedom. For example to track the state and error of passive joints. command_joints must then be a subset of joints.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_joints);
          parameters_interface_->declare_parameter(prefix_ + "command_joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Command interfaces provided by the hardware interface for all joints";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "State interfaces provided by the hardware for all joints.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.state_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_partial_joints_goal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Allow joint goals defining trajectory for only some joints.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_partial_joints_goal);
          parameters_interface_->declare_parameter(prefix_ + "allow_partial_joints_goal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop_control")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "deprecated: use interpolate_from_desired_state and set feedback gains to zero instead";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.open_loop_control);
          parameters_interface_->declare_parameter(prefix_ + "open_loop_control", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interpolate_from_desired_state")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Interpolate from the current desired state when receiving a new trajectory. \n    \n     The controller ignores the states provided by hardware interface but using last commands as states for starting the trajectory interpolation. \n    \n     This is useful if hardware states are not following commands, i.e., an offset between those (typical for hydraulic manipulators). Furthermore, it is necessary if you have a reference trajectory that you send over multiple messages (e.g. for MPC-style trajectory planning). \n    \n     If this flag is set, the controller tries to read the values from the command interfaces on activation. If they have real numeric values, those will be used instead of state interfaces. Therefore it is important set command interfaces to NaN (i.e., std::numeric_limits<double>::quiet_NaN()) or state values when the hardware is started.\n    ";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.interpolate_from_desired_state);
          parameters_interface_->declare_parameter(prefix_ + "interpolate_from_desired_state", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_integration_in_goal_trajectories")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Allow integration in goal trajectories to accept goals without position or velocity specified";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_integration_in_goal_trajectories);
          parameters_interface_->declare_parameter(prefix_ + "allow_integration_in_goal_trajectories", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "set_last_command_interface_value_as_state_on_activation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "When set to true, the last command interface value is used as both the current state and the last commanded state upon activation. When set to false, the current state is used for both.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.set_last_command_interface_value_as_state_on_activation);
          parameters_interface_->declare_parameter(prefix_ + "set_last_command_interface_value_as_state_on_activation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "action_monitor_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Rate to monitor status changes when the controller is executing action (control_msgs::action::FollowJointTrajectory)";
          descriptor.read_only = true;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.1;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.action_monitor_rate);
          parameters_interface_->declare_parameter(prefix_ + "action_monitor_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interpolation_method")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The type of interpolation to use, if any";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.interpolation_method);
          parameters_interface_->declare_parameter(prefix_ + "interpolation_method", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_nonzero_velocity_at_trajectory_end")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If false, the last velocity point has to be zero or the goal will be rejected";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_nonzero_velocity_at_trajectory_end);
          parameters_interface_->declare_parameter(prefix_ + "allow_nonzero_velocity_at_trajectory_end", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cmd_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timeout after which the input command is considered stale. Timeout is counted from the end of the trajectory (the last point). cmd_timeout must be greater than constraints.goal_time, otherwise ignored. If zero, timeout is deactivated";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cmd_timeout);
          parameters_interface_->declare_parameter(prefix_ + "cmd_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "constraints.stopped_velocity_tolerance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Velocity tolerance for at the end of the trajectory that indicates that controlled system is stopped.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.constraints.stopped_velocity_tolerance);
          parameters_interface_->declare_parameter(prefix_ + "constraints.stopped_velocity_tolerance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "constraints.goal_time")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Time tolerance for achieving trajectory goal before or after commanded time. If set to zero, the controller will wait a potentially infinite amount of time.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.constraints.goal_time);
          parameters_interface_->declare_parameter(prefix_ + "constraints.goal_time", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'joints': {}", validation_result.error()));
      }
      if(auto validation_result = size_gt<std::string>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'joints': {}", validation_result.error()));
      }
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_joints': {}", validation_result.error()));
      }
      updated_params.command_joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = size_gt<std::string>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration", "effort"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = joint_trajectory_controller::command_interface_type_combinations(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      updated_params.command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = size_gt<std::string>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = joint_trajectory_controller::state_interface_type_combinations(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      updated_params.state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "allow_partial_joints_goal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_partial_joints_goal = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "open_loop_control");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop_control = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "interpolate_from_desired_state");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interpolate_from_desired_state = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "allow_integration_in_goal_trajectories");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_integration_in_goal_trajectories = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "set_last_command_interface_value_as_state_on_activation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.set_last_command_interface_value_as_state_on_activation = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "action_monitor_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'action_monitor_rate': {}", validation_result.error()));
      }
      updated_params.action_monitor_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "interpolation_method");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = one_of<std::string>(param, {"splines", "none"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'interpolation_method': {}", validation_result.error()));
      }
      updated_params.interpolation_method = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "allow_nonzero_velocity_at_trajectory_end");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_nonzero_velocity_at_trajectory_end = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "cmd_timeout");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cmd_timeout = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "constraints.stopped_velocity_tolerance");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.constraints.stopped_velocity_tolerance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "constraints.goal_time");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'constraints.goal_time': {}", validation_result.error()));
      }
      updated_params.constraints.goal_time = param.as_double();


      // declare and set all dynamic parameters
      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain :math:k_p for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral gain :math:k_i for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain :math:k_d for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral clamp. Symmetrical in both positive and negative direction.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Feed-forward scaling :math:k_{ff} of velocity";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.ff_velocity_scale);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.ff_velocity_scale = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_max");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Upper output clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.u_clamp_max);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.u_clamp_max = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_min");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Lower output clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.u_clamp_min);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.u_clamp_min = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_max");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Upper integral clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp_max);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp_max = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_min");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Lower integral clamp.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp_min);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp_min = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the anti-windup strategy. Options: 'back_calculation', 'conditional_integration', 'legacy' or 'none'. Note that the 'back_calculation' strategy use the tracking_time_constant parameter to tune the anti-windup behavior.";
              descriptor.read_only = true;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup_strategy);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gains.__map_joints.antiwindup_strategy': {}", validation_result.error()));
          }
          entry.antiwindup_strategy = param.as_string();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "tracking_time_constant");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the tracking time constant for the 'back_calculation' strategy. If set to 0.0 when this strategy is selected, a recommended default value will be applied.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.tracking_time_constant);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.tracking_time_constant = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.gains.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "error_deadband");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Is used to stop integration when the error is within the given range.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.error_deadband);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.error_deadband = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.constraints.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance during movement.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.trajectory);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.trajectory = param.as_double();}

      for (const auto & value_1 : updated_params.joints) {

          auto& entry = updated_params.constraints.joints_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance at the goal position.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.goal);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.goal = param.as_double();}


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace joint_trajectory_controller
