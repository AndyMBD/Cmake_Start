cmake_minimum_required(VERSION 3.12)

project(Encapsulate_05 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(Encapsulate_05
               ./src/main.c
               ./src/Animal.c
               ./src/Animal.h
               )

