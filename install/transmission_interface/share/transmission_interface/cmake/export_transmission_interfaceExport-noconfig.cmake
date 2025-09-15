#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "transmission_interface::transmission_interface" for configuration ""
set_property(TARGET transmission_interface::transmission_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(transmission_interface::transmission_interface PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtransmission_interface.so"
  IMPORTED_SONAME_NOCONFIG "libtransmission_interface.so"
  )

list(APPEND _cmake_import_check_targets transmission_interface::transmission_interface )
list(APPEND _cmake_import_check_files_for_transmission_interface::transmission_interface "${_IMPORT_PREFIX}/lib/libtransmission_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
