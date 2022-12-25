# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/ali/custom_installed/eclipse/ESP-IDF/ESP_v5.0/esp-idf-v5.0/components/bootloader/subproject"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/tmp"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/src/bootloader-stamp"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/src"
  "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/ali/eclipse-workspace/Serial_monitor_UART0/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
