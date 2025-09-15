#pragma message("#include \"tricycle_controller_parameters.hpp\" is deprecated. Use #include <tricycle_controller/tricycle_controller_parameters.hpp> instead.")
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



namespace tricycle_controller {

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
        std::string traction_joint_name = "";
        std::string steering_joint_name = "";
        double wheelbase = 0.0;
        double wheel_radius = 0.0;
        std::string odom_frame_id = "odom";
        std::string base_frame_id = "base_link";
        std::vector<double> pose_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> twist_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        bool open_loop = false;
        bool enable_odom_tf = false;
        bool odom_only_twist = false;
        int64_t cmd_vel_timeout = 500;
        bool publish_ackermann_command = false;
        int64_t velocity_rolling_window_size = 10;
        struct Traction {
            double max_velocity = std::numeric_limits<double>::quiet_NaN();
            double min_velocity = std::numeric_limits<double>::quiet_NaN();
            double max_acceleration = std::numeric_limits<double>::quiet_NaN();
            double min_acceleration = std::numeric_limits<double>::quiet_NaN();
            double max_deceleration = std::numeric_limits<double>::quiet_NaN();
            double min_deceleration = std::numeric_limits<double>::quiet_NaN();
            double max_jerk = std::numeric_limits<double>::quiet_NaN();
            double min_jerk = std::numeric_limits<double>::quiet_NaN();
        } traction;
        struct Steering {
            double max_position = std::numeric_limits<double>::quiet_NaN();
            double min_position = std::numeric_limits<double>::quiet_NaN();
            double max_velocity = std::numeric_limits<double>::quiet_NaN();
            double min_velocity = std::numeric_limits<double>::quiet_NaN();
            double max_acceleration = std::numeric_limits<double>::quiet_NaN();
            double min_acceleration = std::numeric_limits<double>::quiet_NaN();
        } steering;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double wheelbase = 0.0;
        double wheel_radius = 0.0;
        bool open_loop = false;
        bool enable_odom_tf = false;
        bool odom_only_twist = false;
        int64_t cmd_vel_timeout = 500;
        bool publish_ackermann_command = false;
        int64_t velocity_rolling_window_size = 10;
        struct Traction {
            double max_velocity = std::numeric_limits<double>::quiet_NaN();
            double min_velocity = std::numeric_limits<double>::quiet_NaN();
            double max_acceleration = std::numeric_limits<double>::quiet_NaN();
            double min_acceleration = std::numeric_limits<double>::quiet_NaN();
            double max_deceleration = std::numeric_limits<double>::quiet_NaN();
            double min_deceleration = std::numeric_limits<double>::quiet_NaN();
            double max_jerk = std::numeric_limits<double>::quiet_NaN();
            double min_jerk = std::numeric_limits<double>::quiet_NaN();
        } traction;
        struct Steering {
            double max_position = std::numeric_limits<double>::quiet_NaN();
            double min_position = std::numeric_limits<double>::quiet_NaN();
            double max_velocity = std::numeric_limits<double>::quiet_NaN();
            double min_velocity = std::numeric_limits<double>::quiet_NaN();
            double max_acceleration = std::numeric_limits<double>::quiet_NaN();
            double min_acceleration = std::numeric_limits<double>::quiet_NaN();
        } steering;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("tricycle_controller"), prefix) {
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
      output.wheelbase = params.wheelbase;
      output.wheel_radius = params.wheel_radius;
      output.open_loop = params.open_loop;
      output.enable_odom_tf = params.enable_odom_tf;
      output.odom_only_twist = params.odom_only_twist;
      output.cmd_vel_timeout = params.cmd_vel_timeout;
      output.publish_ackermann_command = params.publish_ackermann_command;
      output.velocity_rolling_window_size = params.velocity_rolling_window_size;
      output.traction.max_velocity = params.traction.max_velocity;
      output.traction.min_velocity = params.traction.min_velocity;
      output.traction.max_acceleration = params.traction.max_acceleration;
      output.traction.min_acceleration = params.traction.min_acceleration;
      output.traction.max_deceleration = params.traction.max_deceleration;
      output.traction.min_deceleration = params.traction.min_deceleration;
      output.traction.max_jerk = params.traction.max_jerk;
      output.traction.min_jerk = params.traction.min_jerk;
      output.steering.max_position = params.steering.max_position;
      output.steering.min_position = params.steering.min_position;
      output.steering.max_velocity = params.steering.max_velocity;
      output.steering.min_velocity = params.steering.min_velocity;
      output.steering.max_acceleration = params.steering.max_acceleration;
      output.steering.min_acceleration = params.steering.min_acceleration;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "traction_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.traction_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.steering_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheelbase")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.wheelbase = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_radius")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.wheel_radius = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "odom_frame_id")) {
            updated_params.odom_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "base_frame_id")) {
            updated_params.base_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pose_covariance_diagonal")) {
            updated_params.pose_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "twist_covariance_diagonal")) {
            updated_params.twist_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "open_loop")) {
            updated_params.open_loop = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_odom_tf")) {
            updated_params.enable_odom_tf = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "odom_only_twist")) {
            updated_params.odom_only_twist = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cmd_vel_timeout")) {
            updated_params.cmd_vel_timeout = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_ackermann_command")) {
            updated_params.publish_ackermann_command = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "velocity_rolling_window_size")) {
            if(auto validation_result = gt<int64_t>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.velocity_rolling_window_size = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.max_velocity")) {
            updated_params.traction.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.min_velocity")) {
            updated_params.traction.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.max_acceleration")) {
            updated_params.traction.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.min_acceleration")) {
            updated_params.traction.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.max_deceleration")) {
            updated_params.traction.max_deceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.min_deceleration")) {
            updated_params.traction.min_deceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.max_jerk")) {
            updated_params.traction.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "traction.min_jerk")) {
            updated_params.traction.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.max_position")) {
            updated_params.steering.max_position = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.min_position")) {
            updated_params.steering.min_position = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.max_velocity")) {
            updated_params.steering.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.min_velocity")) {
            updated_params.steering.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.max_acceleration")) {
            updated_params.steering.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "steering.min_acceleration")) {
            updated_params.steering.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
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
      if (!parameters_interface_->has_parameter(prefix_ + "traction_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the traction joint";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "traction_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the steering joint";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "steering_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheelbase")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Shortest distance between the front wheel and the rear axle. If this parameter is wrong, the robot will not behave correctly in curves.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.wheelbase);
          parameters_interface_->declare_parameter(prefix_ + "wheelbase", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_radius")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Radius of a wheel, i.e., wheels size, used for transformation of linear velocity into wheel rotations. If this parameter is wrong the robot will move faster or slower then expected.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.wheel_radius);
          parameters_interface_->declare_parameter(prefix_ + "wheel_radius", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "odom_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the frame for odometry. This frame is parent of base_frame_id when controller publishes odometry.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.odom_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "odom_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "base_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the robot's base frame that is child of the odometry frame.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.base_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "base_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pose_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the pose. These values should be tuned to your robot's sample odometry data, but these values are a good place to start: [0.001, 0.001, 0.001, 0.001, 0.001, 0.01].";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pose_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "pose_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "twist_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the speed. These values should be tuned to your robot's sample odometry data, but these values are a good place to start: [0.001, 0.001, 0.001, 0.001, 0.001, 0.01].";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.twist_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "twist_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If set to true the odometry of the robot will be calculated from the commanded values and not from feedback.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.open_loop);
          parameters_interface_->declare_parameter(prefix_ + "open_loop", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_odom_tf")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish transformation between odom_frame_id and base_frame_id.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_odom_tf);
          parameters_interface_->declare_parameter(prefix_ + "enable_odom_tf", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "odom_only_twist")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "for doing the pose integration in separate node.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.odom_only_twist);
          parameters_interface_->declare_parameter(prefix_ + "odom_only_twist", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cmd_vel_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timeout in milliseconds, after which input command on cmd_vel topic is considered staled.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cmd_vel_timeout);
          parameters_interface_->declare_parameter(prefix_ + "cmd_vel_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_ackermann_command")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish limited commands.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_ackermann_command);
          parameters_interface_->declare_parameter(prefix_ + "publish_ackermann_command", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "velocity_rolling_window_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Size of the rolling window for calculation of mean velocity use in odometry.";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 0;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int64_t>::max();
          auto parameter = to_parameter_value(updated_params.velocity_rolling_window_size);
          parameters_interface_->declare_parameter(prefix_ + "velocity_rolling_window_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "traction.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "traction.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "traction.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "traction.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.max_deceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.max_deceleration);
          parameters_interface_->declare_parameter(prefix_ + "traction.max_deceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.min_deceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.min_deceleration);
          parameters_interface_->declare_parameter(prefix_ + "traction.min_deceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "traction.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "traction.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.traction.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "traction.min_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.max_position")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.max_position);
          parameters_interface_->declare_parameter(prefix_ + "steering.max_position", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.min_position")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.min_position);
          parameters_interface_->declare_parameter(prefix_ + "steering.min_position", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "steering.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "steering.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "steering.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "steering.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.steering.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "steering.min_acceleration", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "traction_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'traction_joint_name': {}", validation_result.error()));
      }
      updated_params.traction_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "steering_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'steering_joint_name': {}", validation_result.error()));
      }
      updated_params.steering_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "wheelbase");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'wheelbase': {}", validation_result.error()));
      }
      updated_params.wheelbase = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_radius");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'wheel_radius': {}", validation_result.error()));
      }
      updated_params.wheel_radius = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "odom_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.odom_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "base_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.base_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "pose_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pose_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "twist_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.twist_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "open_loop");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "enable_odom_tf");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_odom_tf = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "odom_only_twist");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.odom_only_twist = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "cmd_vel_timeout");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cmd_vel_timeout = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "publish_ackermann_command");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_ackermann_command = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "velocity_rolling_window_size");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<int64_t>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'velocity_rolling_window_size': {}", validation_result.error()));
      }
      updated_params.velocity_rolling_window_size = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "traction.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.max_deceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.max_deceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.min_deceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.min_deceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "traction.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.traction.min_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.max_position");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.max_position = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.min_position");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.min_position = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "steering.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.steering.min_acceleration = param.as_double();


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

} // namespace tricycle_controller
