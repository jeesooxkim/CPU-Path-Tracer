cmake_minimum_required(VERSION 3.25)
project (PathTracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pathtracer src/main.cpp)