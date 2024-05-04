cmake_minimum_required(VERSION 3.12)

project(Encapsulating_01 C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

add_executable(Encapsulating_001 
               ./src_001/main.c
               ./src_001/Animal.c
               ./src_001/Animal.h
               )

add_executable(Encapsulating_002
                ./src_002/main.c
                ./src_002/Human.c
                ./src_002/Human.h)

