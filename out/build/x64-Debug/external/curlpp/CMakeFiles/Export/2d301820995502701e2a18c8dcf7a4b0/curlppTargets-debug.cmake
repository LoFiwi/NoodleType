#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curlpp::curlpp" for configuration "Debug"
set_property(TARGET curlpp::curlpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(curlpp::curlpp PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/libcurlpp.dll.a"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/libcurlpp.dll"
  )

list(APPEND _cmake_import_check_targets curlpp::curlpp )
list(APPEND _cmake_import_check_files_for_curlpp::curlpp "${_IMPORT_PREFIX}/lib/libcurlpp.dll.a" "${_IMPORT_PREFIX}/bin/libcurlpp.dll" )

# Import target "curlpp::curlpp_static" for configuration "Debug"
set_property(TARGET curlpp::curlpp_static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(curlpp::curlpp_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcurlpp.a"
  )

list(APPEND _cmake_import_check_targets curlpp::curlpp_static )
list(APPEND _cmake_import_check_files_for_curlpp::curlpp_static "${_IMPORT_PREFIX}/lib/libcurlpp.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
