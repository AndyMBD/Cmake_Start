cmake_minimum_required(VERSION 3.12)

project(UML_003 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(Polymorphism_01 
               ./Polymorphism_01/src/main.c
               ./Polymorphism_01/src/Shape.c
               ./Polymorphism_01/src/Shape.h
               )

