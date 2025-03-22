cmake_minimum_required(VERSION 3.25)

project(
  LearnCMakeProject 
  VERSION 0.1.0
  LANGUAGES C
)

add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(exe)
