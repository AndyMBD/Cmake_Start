cmake_minimum_required(VERSION 3.26)
#project(Motor_Control_test_1)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

#src_dir="./Unit_Test"
# Create the executable

####################################################
#-1:---list all file to SUB_UNCRUSTIFY_SRC------#
file(GLOB SUB_UNCRUSTIFY_SRC "${SRC_DIR}/*.h" "${SRC_DIR}/*.c")
#GLOB_RECURSE --include sub dir
#GLOB         --not include sub dir
#aux_source_directory can only list c file
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} _SUB_SOURCES)

#-2:---Append all file to parent variable------#
# add current source to parent variable
list(APPEND TOP_UNCRUSTIFY_SRC ${SUB_UNCRUSTIFY_SRC})

#-3:---set TOP_UNCRUSTIFY_SRC to parent scope ------#
set(TOP_UNCRUSTIFY_SRC ${TOP_UNCRUSTIFY_SRC} PARENT_SCOPE)

# Message Output SRC List

message("SUB_UNCRUSTIFY_SRC: ******" ${SUB_UNCRUSTIFY_SRC})

