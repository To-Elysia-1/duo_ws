#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "auto_aim_interfaces::auto_aim_interfaces__rosidl_typesupport_cpp" for configuration "RelWithDebInfo"
set_property(TARGET auto_aim_interfaces::auto_aim_interfaces__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(auto_aim_interfaces::auto_aim_interfaces__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libauto_aim_interfaces__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libauto_aim_interfaces__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets auto_aim_interfaces::auto_aim_interfaces__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_auto_aim_interfaces::auto_aim_interfaces__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libauto_aim_interfaces__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
