cmake_minimum_required(VERSION 3.25)
project (PathTracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include(FetchContent)

# FetchContent_Declare(
#     Catch2
#     GIT_REPOSITORY https://github.com/catchorg/Catch2.git
#     GIT_TAG        v3.8.1
# )

# FetchContent_MakeAvailable(Catch2)

add_executable(pathtracer src/main.cpp)
# target_link_libraries(pathtracer PRIVATE Catch2::Catch2WithMain)

# list(APPEND CMAKE_MODULE_PATH ../build/_deps/catch2-src/extras)
# include(CTest)
# include(Catch)
# catch_discover_tests(pathtracer)