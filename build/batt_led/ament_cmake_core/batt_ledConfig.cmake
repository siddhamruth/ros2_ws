# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_batt_led_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED batt_led_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(batt_led_FOUND FALSE)
  elseif(NOT batt_led_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(batt_led_FOUND FALSE)
  endif()
  return()
endif()
set(_batt_led_CONFIG_INCLUDED TRUE)

# output package information
if(NOT batt_led_FIND_QUIETLY)
  message(STATUS "Found batt_led: 0.0.0 (${batt_led_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'batt_led' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${batt_led_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(batt_led_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${batt_led_DIR}/${_extra}")
endforeach()
