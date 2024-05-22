cmake_minimum_required(VERSION 3.12)
project(Ch_6_2 C)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME})
aux_source_directory(${PROJECT_SOURCE_DIR}/src sources)
# aux_source_directory(mylib sources)
target_sources(${PROJECT_NAME} 
               PUBLIC 
               ${sources})