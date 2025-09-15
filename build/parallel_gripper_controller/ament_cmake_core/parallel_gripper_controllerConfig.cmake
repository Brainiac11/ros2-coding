# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_parallel_gripper_controller_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED parallel_gripper_controller_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(parallel_gripper_controller_FOUND FALSE)
  elseif(NOT parallel_gripper_controller_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(parallel_gripper_controller_FOUND FALSE)
  endif()
  return()
endif()
set(_parallel_gripper_controller_CONFIG_INCLUDED TRUE)

# output package information
if(NOT parallel_gripper_controller_FIND_QUIETLY)
  message(STATUS "Found parallel_gripper_controller: 4.32.0 (${parallel_gripper_controller_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'parallel_gripper_controller' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT parallel_gripper_controller_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(parallel_gripper_controller_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${parallel_gripper_controller_DIR}/${_extra}")
endforeach()
