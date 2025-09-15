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



namespace pid_controller {

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
        std::vector<std::string> dof_names = {};
        std::vector<std::string> reference_and_state_dof_names = {};
        std::string command_interface = "";
        std::vector<std::string> reference_and_state_interfaces = {};
        bool use_external_measured_states = false;
        bool enable_feedforward = false;
        struct Gains {
            struct MapDofNames {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double u_clamp_max = std::numeric_limits<double>::infinity();
                double u_clamp_min = -std::numeric_limits<double>::infinity();
                bool antiwindup = false;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                std::string antiwindup_strategy = "legacy";
                double tracking_time_constant = 0.0;
                double error_deadband = 1e-16;
                double feedforward_gain = 0.0;
                bool angle_wraparound = false;
                bool save_i_term = true;
                bool activate_state_publisher = false;
            };
            std::map<std::string, MapDofNames> dof_names_map;
        } gains;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool use_external_measured_states = false;
        bool enable_feedforward = false;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("pid_controller"), prefix) {
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
      output.use_external_measured_states = params.use_external_measured_states;
      output.enable_feedforward = params.enable_feedforward;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;
      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Anti-windup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.antiwindup = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the anti-windup strategy. Options: 'back_calculation', 'conditional_integration', 'legacy' or 'none'. Note that the 'back_calculation' strategy use the tracking_time_constant parameter to tune the anti-windup behavior.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup_strategy);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gains.__map_dof_names.antiwindup_strategy': {}", validation_result.error()));
          }
          entry.antiwindup_strategy = param.as_string();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "feedforward_gain");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Gain for the feed-forward part.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.feedforward_gain);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.feedforward_gain = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "angle_wraparound");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "For joints that wrap around (i.e., are continuous). Normalizes position-error to -pi to pi.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.angle_wraparound);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.angle_wraparound = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "save_i_term");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Indicating if integral term is retained after re-activation";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.save_i_term);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.save_i_term = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "activate_state_publisher");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Individual state publisher activation for each DOF. If true, the controller will publish the state of each DOF to the topic /<controller_name>/<dof_name>/pid_state.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.activate_state_publisher);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.activate_state_publisher = param.as_bool();}

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "dof_names")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.dof_names = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "reference_and_state_dof_names")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.reference_and_state_dof_names = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interface")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_interface = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "reference_and_state_interfaces")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = size_gt<std::string>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = size_lt<std::string>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.reference_and_state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "use_external_measured_states")) {
            updated_params.use_external_measured_states = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_feedforward")) {
            updated_params.enable_feedforward = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      // update dynamic parameters
      for (const auto &param: parameters) {
        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].p = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].i = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].d = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_max");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].u_clamp_max = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "u_clamp_min");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].u_clamp_min = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].antiwindup = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_max");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].i_clamp_max = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp_min");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].i_clamp_min = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
            if (param.get_name() == param_name) {
                if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
                  !validation_result) {
                    return rsl::to_parameter_result_msg(validation_result);
                }

                updated_params.gains.dof_names_map[value_1].antiwindup_strategy = param.as_string();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "tracking_time_constant");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].tracking_time_constant = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "error_deadband");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].error_deadband = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "feedforward_gain");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].feedforward_gain = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "angle_wraparound");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].angle_wraparound = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "save_i_term");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].save_i_term = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }

        for (const auto & value_1 : updated_params.dof_names) {
        std::string value = fmt::format("{}", value_1);

            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "activate_state_publisher");
            if (param.get_name() == param_name) {

                updated_params.gains.dof_names_map[value_1].activate_state_publisher = param.as_bool();
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
      if (!parameters_interface_->has_parameter(prefix_ + "dof_names")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies dof_names or axes used by the controller. If 'reference_and_state_dof_names' parameter is defined, then only command dof names are defined with this parameter.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.dof_names);
          parameters_interface_->declare_parameter(prefix_ + "dof_names", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "reference_and_state_dof_names")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "(optional) Specifies dof_names or axes for getting reference and reading states. This parameter is only relevant when state dof names are different then command dof names, i.e., when a following controller is used.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.reference_and_state_dof_names);
          parameters_interface_->declare_parameter(prefix_ + "reference_and_state_dof_names", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interface")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the interface used by the controller for writing commands to the hardware.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_interface);
          parameters_interface_->declare_parameter(prefix_ + "command_interface", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "reference_and_state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the interfaces used by the controller getting hardware states and reference commands. The second interface should be the derivative of the first.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.reference_and_state_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "reference_and_state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "use_external_measured_states")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Use external states from a topic instead from state interfaces.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.use_external_measured_states);
          parameters_interface_->declare_parameter(prefix_ + "use_external_measured_states", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_feedforward")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enables feedforward gain. (Will be deprecated in favour of setting feedforward_gain to a non-zero value.)";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_feedforward);
          parameters_interface_->declare_parameter(prefix_ + "enable_feedforward", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "dof_names");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'dof_names': {}", validation_result.error()));
      }
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'dof_names': {}", validation_result.error()));
      }
      updated_params.dof_names = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "reference_and_state_dof_names");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'reference_and_state_dof_names': {}", validation_result.error()));
      }
      updated_params.reference_and_state_dof_names = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_interface");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interface': {}", validation_result.error()));
      }
      updated_params.command_interface = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "reference_and_state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'reference_and_state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = size_gt<std::string>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'reference_and_state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = size_lt<std::string>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'reference_and_state_interfaces': {}", validation_result.error()));
      }
      updated_params.reference_and_state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "use_external_measured_states");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.use_external_measured_states = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "enable_feedforward");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_feedforward = param.as_bool();


      // declare and set all dynamic parameters
      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integral gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "[Deprecated, see antiwindup_strategy] Anti-windup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.antiwindup = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "antiwindup_strategy");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Specifies the anti-windup strategy. Options: 'back_calculation', 'conditional_integration', 'legacy' or 'none'. Note that the 'back_calculation' strategy use the tracking_time_constant parameter to tune the anti-windup behavior.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.antiwindup_strategy);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = one_of<std::string>(param, {"back_calculation", "conditional_integration", "legacy", "none"});
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gains.__map_dof_names.antiwindup_strategy': {}", validation_result.error()));
          }
          entry.antiwindup_strategy = param.as_string();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
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

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "feedforward_gain");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Gain for the feed-forward part.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.feedforward_gain);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.feedforward_gain = param.as_double();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "angle_wraparound");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "For joints that wrap around (i.e., are continuous). Normalizes position-error to -pi to pi.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.angle_wraparound);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.angle_wraparound = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "save_i_term");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Indicating if integral term is retained after re-activation";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.save_i_term);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.save_i_term = param.as_bool();}

      for (const auto & value_1 : updated_params.dof_names) {

          auto& entry = updated_params.gains.dof_names_map[value_1];
          std::string value = fmt::format("{}", value_1);

          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "activate_state_publisher");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Individual state publisher activation for each DOF. If true, the controller will publish the state of each DOF to the topic /<controller_name>/<dof_name>/pid_state.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.activate_state_publisher);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.activate_state_publisher = param.as_bool();}


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

} // namespace pid_controller
