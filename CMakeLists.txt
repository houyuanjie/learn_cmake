cmake_minimum_required(VERSION 3.25)

project(
  LearnCMakeProject 
  VERSION 0.1.0
  LANGUAGES C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_EXTENSIONS NO)

add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(exe)