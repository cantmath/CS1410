cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(ex0101 src/Example0101.cpp)
add_executable(ex0201 src/Example0201.cpp)
add_executable(ex0202 src/Example0202.cpp)
add_executable(ex0203 src/Example0203.cpp)
add_executable(ex0301 src/Example0301.cpp)
add_executable(ex0302 src/Example0302.cpp)
add_executable(ex0401 src/Example0401.cpp)
add_executable(ex0402 src/Example0402.cpp)
add_executable(ex0501 src/Example0501.cpp)
add_executable(ex0502 src/Example0502.cpp)