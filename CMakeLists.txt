cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "--std=c++11 ${CMAKE_CXX_FLAGS}")
project(p1_json_hello_world)

# 1st way
include_directories(3rdparty/json-develop/include)

# 2nd way?
# didn't find nlohmann_jsonConfig.cmake
# find_package(nlohmann_json 3.2.0 REQUIRED)

add_executable(json_test src/main.cpp)
