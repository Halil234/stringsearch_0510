cmake_minimum_required(VERSION 3.0)
project(Hello123)
set(SOURCE src/main.cpp src/Textsearch.cpp include/Textsearch.h)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(${PROJECT_NAME} ${SOURCE})
include_directories(include)