cmake_minimum_required(VERSION 3.12)

project(Polymorphism_04 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(Polymorphism_04
               ./src/main.c
               ./src/Shape.c
               ./src/Shape.h
               )

