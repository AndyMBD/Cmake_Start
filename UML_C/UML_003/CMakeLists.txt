cmake_minimum_required(VERSION 3.12)

project(UML_003 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(UML_003 
               ./src/main.c
               ./src/Shape.c
               ./src/Shape.h
               )

