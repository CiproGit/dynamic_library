cmake_minimum_required(VERSION 3.5)

project(use_animal LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_directories(../animal/build/Debug)

include_directories(../animal/include ../animal/build)

add_executable(use_animal main.cpp)
target_link_libraries(use_animal animal.dll)
