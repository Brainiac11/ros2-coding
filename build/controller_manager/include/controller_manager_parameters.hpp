#pragma message("#include \"controller_manager_parameters.hpp\" is deprecated. Use #include <controller_manager/controller_manager_parameters.hpp> instead.")
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



namespace controller_manager {

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
        int64_t update_rate = 100;
        bool enforce_command_limits = false;
        struct HardwareComponentsInitialState {
            std::vector<std::string> unconfigured = {};
            std::vector<std::string> inactive = {};
            bool shutdown_on_initial_state_failure = true;
        } hardware_components_initial_state;
        struct Defaults {
            struct SwitchController {
                std::string strictness = "best_effort";
            } switch_controller;
        } defaults;
        struct Diagnostics {
            struct Threshold {
                struct ControllerManager {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                } controller_manager;
                struct Controllers {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                    struct ExecutionTime {
                        struct MeanError {
                            double warn = 1000.0;
                            double error = 2000.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 100.0;
                            double error = 200.0;
                        } standard_deviation;
                    } execution_time;
                } controllers;
                struct HardwareComponents {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                    struct ExecutionTime {
                        struct MeanError {
                            double warn = 1000.0;
                            double error = 2000.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 100.0;
                            double error = 200.0;
                        } standard_deviation;
                    } execution_time;
                } hardware_components;
            } threshold;
        } diagnostics;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t update_rate = 100;
        bool enforce_command_limits = false;
        struct HardwareComponentsInitialState {
            bool shutdown_on_initial_state_failure = true;
        } hardware_components_initial_state;
        struct Diagnostics {
            struct Threshold {
                struct ControllerManager {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                } controller_manager;
                struct Controllers {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                    struct ExecutionTime {
                        struct MeanError {
                            double warn = 1000.0;
                            double error = 2000.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 100.0;
                            double error = 200.0;
                        } standard_deviation;
                    } execution_time;
                } controllers;
                struct HardwareComponents {
                    struct Periodicity {
                        struct MeanError {
                            double warn = 5.0;
                            double error = 10.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 5.0;
                            double error = 10.0;
                        } standard_deviation;
                    } periodicity;
                    struct ExecutionTime {
                        struct MeanError {
                            double warn = 1000.0;
                            double error = 2000.0;
                        } mean_error;
                        struct StandardDeviation {
                            double warn = 100.0;
                            double error = 200.0;
                        } standard_deviation;
                    } execution_time;
                } hardware_components;
            } threshold;
        } diagnostics;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("controller_manager"), prefix) {
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
      output.update_rate = params.update_rate;
      output.enforce_command_limits = params.enforce_command_limits;
      output.hardware_components_initial_state.shutdown_on_initial_state_failure = params.hardware_components_initial_state.shutdown_on_initial_state_failure;
      output.diagnostics.threshold.controller_manager.periodicity.mean_error.warn = params.diagnostics.threshold.controller_manager.periodicity.mean_error.warn;
      output.diagnostics.threshold.controller_manager.periodicity.mean_error.error = params.diagnostics.threshold.controller_manager.periodicity.mean_error.error;
      output.diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn = params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn;
      output.diagnostics.threshold.controller_manager.periodicity.standard_deviation.error = params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.error;
      output.diagnostics.threshold.controllers.periodicity.mean_error.warn = params.diagnostics.threshold.controllers.periodicity.mean_error.warn;
      output.diagnostics.threshold.controllers.periodicity.mean_error.error = params.diagnostics.threshold.controllers.periodicity.mean_error.error;
      output.diagnostics.threshold.controllers.periodicity.standard_deviation.warn = params.diagnostics.threshold.controllers.periodicity.standard_deviation.warn;
      output.diagnostics.threshold.controllers.periodicity.standard_deviation.error = params.diagnostics.threshold.controllers.periodicity.standard_deviation.error;
      output.diagnostics.threshold.controllers.execution_time.mean_error.warn = params.diagnostics.threshold.controllers.execution_time.mean_error.warn;
      output.diagnostics.threshold.controllers.execution_time.mean_error.error = params.diagnostics.threshold.controllers.execution_time.mean_error.error;
      output.diagnostics.threshold.controllers.execution_time.standard_deviation.warn = params.diagnostics.threshold.controllers.execution_time.standard_deviation.warn;
      output.diagnostics.threshold.controllers.execution_time.standard_deviation.error = params.diagnostics.threshold.controllers.execution_time.standard_deviation.error;
      output.diagnostics.threshold.hardware_components.periodicity.mean_error.warn = params.diagnostics.threshold.hardware_components.periodicity.mean_error.warn;
      output.diagnostics.threshold.hardware_components.periodicity.mean_error.error = params.diagnostics.threshold.hardware_components.periodicity.mean_error.error;
      output.diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn = params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn;
      output.diagnostics.threshold.hardware_components.periodicity.standard_deviation.error = params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.error;
      output.diagnostics.threshold.hardware_components.execution_time.mean_error.warn = params.diagnostics.threshold.hardware_components.execution_time.mean_error.warn;
      output.diagnostics.threshold.hardware_components.execution_time.mean_error.error = params.diagnostics.threshold.hardware_components.execution_time.mean_error.error;
      output.diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn = params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn;
      output.diagnostics.threshold.hardware_components.execution_time.standard_deviation.error = params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.error;

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
        if (param.get_name() == (prefix_ + "update_rate")) {
            updated_params.update_rate = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enforce_command_limits")) {
            updated_params.enforce_command_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hardware_components_initial_state.unconfigured")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hardware_components_initial_state.unconfigured = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hardware_components_initial_state.inactive")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hardware_components_initial_state.inactive = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hardware_components_initial_state.shutdown_on_initial_state_failure")) {
            updated_params.hardware_components_initial_state.shutdown_on_initial_state_failure = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "defaults.switch_controller.strictness")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = one_of<std::string>(param, {"strict", "best_effort"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.defaults.switch_controller.strictness = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.periodicity.mean_error.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.periodicity.mean_error.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.execution_time.mean_error.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.execution_time.mean_error.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.error")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.error = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "update_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The frequency of controller manager's real-time update loop. This loop reads states from hardware, updates controllers and writes commands to hardware.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.update_rate);
          parameters_interface_->declare_parameter(prefix_ + "update_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enforce_command_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true, the controller manager will enforce command limits defined in the robot description. If false, no limits will be enforced. If true, when the command is outside the limits, the command is clamped to be within the limits depending on the type of configured joint limits defined in the robot description. If the command is within the limits, the command is passed through without any changes.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.enforce_command_limits);
          parameters_interface_->declare_parameter(prefix_ + "enforce_command_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hardware_components_initial_state.unconfigured")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Defines which hardware components will be only loaded when controller manager is started. These hardware components will need to be configured and activated manually or via a hardware spawner.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hardware_components_initial_state.unconfigured);
          parameters_interface_->declare_parameter(prefix_ + "hardware_components_initial_state.unconfigured", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hardware_components_initial_state.inactive")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Defines which hardware components will be configured when controller manager is started. These hardware components will need to be activated manually or via a hardware spawner.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hardware_components_initial_state.inactive);
          parameters_interface_->declare_parameter(prefix_ + "hardware_components_initial_state.inactive", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hardware_components_initial_state.shutdown_on_initial_state_failure")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies whether the controller manager should shut down if setting the desired initial state fails during startup.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.hardware_components_initial_state.shutdown_on_initial_state_failure);
          parameters_interface_->declare_parameter(prefix_ + "hardware_components_initial_state.shutdown_on_initial_state_failure", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "defaults.switch_controller.strictness")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The default switch controller strategy. This strategy is used when no strategy is specified in the switch_controller service call.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.defaults.switch_controller.strictness);
          parameters_interface_->declare_parameter(prefix_ + "defaults.switch_controller.strictness", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the mean error of the controller manager's periodicity in Hz. If the mean error exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the mean error of the controller manager's periodicity in Hz. If the mean error exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the standard deviation of the controller manager's periodicity in Hz. If the standard deviation exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the standard deviation of the controller manager's periodicity in Hz. If the standard deviation exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the mean error of the controller update loop in Hz. If the mean error exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.periodicity.mean_error.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the mean error of the controller update loop in Hz. If the mean error exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.periodicity.mean_error.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the standard deviation of the controller update loop in Hz. If the standard deviation exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the standard deviation of the controller update loop in Hz. If the standard deviation exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the mean error of the controller's update cycle execution time in microseconds. If the mean error exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.execution_time.mean_error.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the mean error of the controller's update cycle execution time in microseconds. If the mean error exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.execution_time.mean_error.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the standard deviation of the controller's update cycle execution time in microseconds. If the standard deviation exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the standard deviation of the controller's update cycle execution time in microseconds. If the standard deviation exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the mean error of the hardware component's read/write loop in Hz. If the mean error exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the mean error of the hardware component's read/write loop in Hz. If the mean error exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the standard deviation of the hardware component's read/write loop in Hz. If the standard deviation exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the standard deviation of the hardware component's read/write loop in Hz. If the standard deviation exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the mean error of the hardware component's read/write cycle execution time in microseconds. If the mean error exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the mean error of the hardware component's read/write cycle execution time in microseconds. If the mean error exceeds this threshold, a error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The warning threshold for the standard deviation of the hardware component's read/write cycle execution time in microseconds. If the standard deviation exceeds this threshold, a warning diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The error threshold for the standard deviation of the hardware component's update cycle execution time in microseconds. If the standard deviation exceeds this threshold, an error diagnostic will be published.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.error);
          parameters_interface_->declare_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.error", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "update_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.update_rate = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "enforce_command_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enforce_command_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "hardware_components_initial_state.unconfigured");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hardware_components_initial_state.unconfigured': {}", validation_result.error()));
      }
      updated_params.hardware_components_initial_state.unconfigured = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "hardware_components_initial_state.inactive");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hardware_components_initial_state.inactive': {}", validation_result.error()));
      }
      updated_params.hardware_components_initial_state.inactive = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "hardware_components_initial_state.shutdown_on_initial_state_failure");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.hardware_components_initial_state.shutdown_on_initial_state_failure = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "defaults.switch_controller.strictness");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'defaults.switch_controller.strictness': {}", validation_result.error()));
      }
      if(auto validation_result = one_of<std::string>(param, {"strict", "best_effort"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'defaults.switch_controller.strictness': {}", validation_result.error()));
      }
      updated_params.defaults.switch_controller.strictness = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controller_manager.periodicity.mean_error.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.mean_error.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controller_manager.periodicity.mean_error.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controller_manager.periodicity.mean_error.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controller_manager.periodicity.standard_deviation.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controller_manager.periodicity.standard_deviation.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controller_manager.periodicity.standard_deviation.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.periodicity.mean_error.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.periodicity.mean_error.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.mean_error.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.periodicity.mean_error.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.periodicity.mean_error.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.periodicity.standard_deviation.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.periodicity.standard_deviation.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.periodicity.standard_deviation.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.periodicity.standard_deviation.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.execution_time.mean_error.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.execution_time.mean_error.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.mean_error.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.execution_time.mean_error.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.execution_time.mean_error.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.execution_time.standard_deviation.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.controllers.execution_time.standard_deviation.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.controllers.execution_time.standard_deviation.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.controllers.execution_time.standard_deviation.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.periodicity.mean_error.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.mean_error.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.periodicity.mean_error.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.periodicity.mean_error.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.periodicity.standard_deviation.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.periodicity.standard_deviation.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.periodicity.standard_deviation.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.execution_time.mean_error.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.mean_error.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.execution_time.mean_error.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.execution_time.mean_error.error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.warn = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "diagnostics.threshold.hardware_components.execution_time.standard_deviation.error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'diagnostics.threshold.hardware_components.execution_time.standard_deviation.error': {}", validation_result.error()));
      }
      updated_params.diagnostics.threshold.hardware_components.execution_time.standard_deviation.error = param.as_double();


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

} // namespace controller_manager
