cmake_minimum_required(VERSION 3.12)

project(Cmake_001 C)

set(CMAKE_C_STANDARD 11)

include_directories(./src/math)
include_directories(./src/app)

add_executable(Cmake_001
               ./src/app/main.c
               ./src/math/power.c
               ./src/math/power.h)

