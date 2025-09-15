#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "chained_filter_controller::chained_filter_controller" for configuration ""
set_property(TARGET chained_filter_controller::chained_filter_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(chained_filter_controller::chained_filter_controller PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libchained_filter_controller.so"
  IMPORTED_SONAME_NOCONFIG "libchained_filter_controller.so"
  )

list(APPEND _cmake_import_check_targets chained_filter_controller::chained_filter_controller )
list(APPEND _cmake_import_check_files_for_chained_filter_controller::chained_filter_controller "${_IMPORT_PREFIX}/lib/libchained_filter_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
