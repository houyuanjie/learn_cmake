cmake_minimum_required(VERSION 3.25)

project(
  LearnCMakeProject 
  VERSION 0.1.0
  LANGUAGES C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_EXTENSIONS NO)

option(BUILD_BIN "Build executables." YES)
option(BUILD_LIB "Build libraries." YES)
option(BUILD_INCLUDE "Build include files." YES)

if (BUILD_LIB)
  add_subdirectory(lib)
else()
  message("[INFO] Libraries disabled. Enable with -DBUILD_LIB=YES")
endif()

if (BUILD_INCLUDE)
  add_subdirectory(include)
else()
  message("[INFO] Include files disabled. Enable with -DBUILD_INCLUDE=YES")
endif()

if (BUILD_BIN)
  add_subdirectory(bin)
else()
  message("[INFO] Executables disabled. Enable with -DBUILD_BIN=YES")
endif()
