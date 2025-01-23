#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curlpp::curlpp" for configuration ""
set_property(TARGET curlpp::curlpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(curlpp::curlpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcurlpp.so.1.0.0"
  IMPORTED_SONAME_NOCONFIG "libcurlpp.so.1"
  )

list(APPEND _cmake_import_check_targets curlpp::curlpp )
list(APPEND _cmake_import_check_files_for_curlpp::curlpp "${_IMPORT_PREFIX}/lib/libcurlpp.so.1.0.0" )

# Import target "curlpp::curlpp_static" for configuration ""
set_property(TARGET curlpp::curlpp_static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(curlpp::curlpp_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcurlpp.a"
  )

list(APPEND _cmake_import_check_targets curlpp::curlpp_static )
list(APPEND _cmake_import_check_files_for_curlpp::curlpp_static "${_IMPORT_PREFIX}/lib/libcurlpp.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
