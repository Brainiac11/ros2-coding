#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "parallel_gripper_controller::parallel_gripper_action_controller" for configuration ""
set_property(TARGET parallel_gripper_controller::parallel_gripper_action_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(parallel_gripper_controller::parallel_gripper_action_controller PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libparallel_gripper_action_controller.so"
  IMPORTED_SONAME_NOCONFIG "libparallel_gripper_action_controller.so"
  )

list(APPEND _cmake_import_check_targets parallel_gripper_controller::parallel_gripper_action_controller )
list(APPEND _cmake_import_check_files_for_parallel_gripper_controller::parallel_gripper_action_controller "${_IMPORT_PREFIX}/lib/libparallel_gripper_action_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
