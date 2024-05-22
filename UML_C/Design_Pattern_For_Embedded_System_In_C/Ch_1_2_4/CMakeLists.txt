cmake_minimum_required(VERSION 3.12)
set(CMAKE_C_STANDARD 11)
project(Ch_1_2_4 C)

# include_directories(${PROJECT_SOURCE_DIR}/inc)
# include_directories(${PROJECT_SOURCE_DIR}/src)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)


add_executable(Ch_1_2_4)
aux_source_directory(${PROJECT_SOURCE_DIR}/src sources)
# aux_source_directory(mylib sources)
target_sources(Ch_1_2_4 
               PUBLIC 
               ${sources})


# message("---------------------------")
# message(${PROJECT_SOURCE_DIR})
# message(${SRC_LIST})
# message("---------------------------")
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/cachedQueue.c
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/cachedQueue.h
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/main_Queue_1.c
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/main.c
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/Queue.c 
# UML_C/Design_Pattern_For_Embedded_System_In_C/Ch_1_2_4/src/Queue.h
