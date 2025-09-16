# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cmdvel_to_ackermann_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cmdvel_to_ackermann_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cmdvel_to_ackermann_FOUND FALSE)
  elseif(NOT cmdvel_to_ackermann_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cmdvel_to_ackermann_FOUND FALSE)
  endif()
  return()
endif()
set(_cmdvel_to_ackermann_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cmdvel_to_ackermann_FIND_QUIETLY)
  message(STATUS "Found cmdvel_to_ackermann: 0.1.0 (${cmdvel_to_ackermann_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cmdvel_to_ackermann' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT cmdvel_to_ackermann_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cmdvel_to_ackermann_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${cmdvel_to_ackermann_DIR}/${_extra}")
endforeach()
