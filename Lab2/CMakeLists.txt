cmake_minimum_required(VERSION 3.10)

project(CalculatorProject CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calculator STATIC calculator.cpp)

add_executable(app main.cpp)

target_link_libraries(app PRIVATE calculator)
