cmake_minimum_required(VERSION 3.0.0)
project(HelloWorld VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE sources  src/*.cpp src/*.h)
file(GLOB_RECURSE data resources/*)

include(CTest)
enable_testing()

add_executable(HelloWorld src/Hello.cpp src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
