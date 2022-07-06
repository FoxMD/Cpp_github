cmake_minimum_required(VERSION 3.14)

# require C++17
set(CMAKE_CXX_STANDARD 17)
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

# TESTING
# testing binary
add_executable(cpp_test_integer test/test_integer.cpp)
target_link_libraries(cpp_test_integer PRIVATE sum_integers)

add_executable(cpp_test_greeting test/test_greeting.cpp)
target_link_libraries(cpp_test_greeting PRIVATE greeting)

# enable testing functionality
enable_testing()

# define tests
add_test(
  NAME cpp_test_integer
  COMMAND $<TARGET_FILE:cpp_test_integer>
)

add_test(
    NAME cpp_test_greeting
    COMMAND $<TARGET_FILE:cpp_test_greeting>
)