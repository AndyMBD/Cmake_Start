cmake_minimum_required(VERSION 3.12)

project(Ch_2_1_5_4_Observer_Pattern C)

set(CMAKE_C_STANDARD 11)

add_executable(Ch_2_1_5_4_Observer_Pattern)
aux_source_directory(${PROJECT_SOURCE_DIR}/src sources)
# aux_source_directory(mylib sources)
target_sources(Ch_2_1_5_4_Observer_Pattern 
               PUBLIC 
               ${sources})