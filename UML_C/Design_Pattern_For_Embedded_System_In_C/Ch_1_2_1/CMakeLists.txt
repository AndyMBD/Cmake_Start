cmake_minimum_required(VERSION 3.12)

project(Ch_1_2_1 C)

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_executable(Ch_1_2_1)
aux_source_directory(${PROJECT_SOURCE_DIR}/src sources)
# aux_source_directory(mylib sources)
target_sources(Ch_1_2_1 
                PUBLIC 
                ${sources})
# message("---------------------------")
# message(${PROJECT_SOURCE_DIR})
# message(${SRC_LIST})
# message("---------------------------")
