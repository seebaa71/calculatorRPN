cmake_minimum_required(VERSION 3.17)
project(calculator)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
include_directories(include)



add_executable(calculator main.cpp Tests/ClassName.h Tests/test.cpp src/calculator.cpp include/calculator.h Tests/operations.cpp)
target_link_libraries(calculator gtest gtest_main)
