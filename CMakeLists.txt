cmake_minimum_required(VERSION 3.14)

# require C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(example LANGUAGES CXX)

add_executable(hello hello.cpp)

# static library
add_library(greeting STATIC
    greeting.cpp
)

# example library
add_library(sum_integers integer.cpp)

# main code
target_link_libraries(hello PRIVATE greeting sum_integers)

# testing binary
add_executable(cpp_test test/test.cpp)
target_link_libraries(cpp_test PRIVATE sum_integers)

# enable testing functionality
enable_testing()

# define tests
add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
)