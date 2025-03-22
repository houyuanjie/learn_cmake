cmake_minimum_required(VERSION 3.25)

project(
  LearnCMakeProject 
  VERSION 0.1.0
  LANGUAGES C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_EXTENSIONS NO)

option(BUILD_EXE "Build executables." NO)

add_subdirectory(lib)
add_subdirectory(include)

if (BUILD_EXE)
  add_subdirectory(exe)
else()
  message("[INFO] Executables disabled. Enable with -DBUILD_EXE=YES")
endif()
