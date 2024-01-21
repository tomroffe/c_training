cmake_minimum_required(VERSION 3.28.1)

# Prject Name
project(
  training
  LANGUAGES C
  VERSION 0.1.0
  HOMEPAGE_URL https://github.com/tomroffe/c_training
  DESCRIPTION "C Programming Training")

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED YES)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(cipher)
add_subdirectory(hello_world)
