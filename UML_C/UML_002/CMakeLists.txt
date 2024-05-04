cmake_minimum_required(VERSION 3.12)

project(Inheritance_001 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(Inheritance_001 
               ./src/main.c
               ./src/Human.c
               ./src/Human.h
               )

