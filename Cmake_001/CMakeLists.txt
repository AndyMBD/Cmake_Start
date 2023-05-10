cmake_minimum_required(VERSION 3.1.0)

project(main C)

set(CMAKE_C_STANDARD 11)

include_directories(./src/math)
include_directories(./src/app)

add_executable(main 
               ./src/app/main.c
               ./src/math/power.c
               ./src/math/power.h)

