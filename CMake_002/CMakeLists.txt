#-------------------------------------------------------------------------------
# File: CMakeLists.txt
# Description: CMake Configuration File
#-------------------------------------------------------------------------------
# CMake最低版本要求
cmake_minimum_required(VERSION 3.26)
# 项目名称
project(Template C)

#-------------------------------------------------------------------------------
# project setting
# set(CMAKE_BUILD_TYPE Release)
# set(CMAKE_BUILD_TYPE Release)
#-------------------------------------------------------------------------------
# setting for compiling in debug or release mode
if(${CMAKE_BUILD_TYPE} MATCHES "Release")
  message(STATUS "Release Version")
  set(BuildType "Release")
else()
  message(STATUS "Debug Version")
  set(BuildType "Debug")
endif()

# 设置bin和lib库目录
# PROJECT_SOURCE_DIR为cmake内置变量，表示工程的根目录
set(RELEASE_DIR ${PROJECT_SOURCE_DIR}/Release)
# debug和release版本目录不一样
# LIBRARY_OUTPUT_PATH为cmake内置变量，表示目标链接库文件的存放位置
set(LIBRARY_OUTPUT_PATH ${RELEASE_DIR}/${BuildType})
set(EXECUTABLE_OUTPUT_PATH ${RELEASE_DIR}/${BuildType})

#-----------------------------------------------------------------------------
# compile setting
#-----------------------------------------------------------------------------
# 设置编译选项
# -fPIC:标识编译为位置独立的代码，不用此选项的话编译后的代码是位置相关的
# add_compile_options是针对所有类型编译器的
add_compile_options(-fPIC)
# 设置c++编译器编译选项        
set(CXX_FLAGS
  -std=c++11
  -Wno-overflow
  -Wno-conversion-null
  -Wno-maybe-uninitialized
  -Wno-uninitialized
  -Wno-sequence-point
  -Wno-write-strings
  -Wno-unused-label
  -Wno-unused-variable
  -Wno-unused-variable
  -Wno-cpp
  -Wno-deprecated
  -Wno-unused-but-set-variable -pthread)

# string(REPLACE <match-string> <replace-string> <out-var> <input>...)
# 替换CXX_FLAGS变量中的;字符为空格，然后写入CMAKE_CXX_FLAGS,CMAKE_CXX_FLAGS为cmake内置变量，用于设置C++编译选项
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")
# CMAKE_CXX_COMPILER为cmake内置变量，用于指定gcc,g++版本编译
set(CMAKE_CXX_COMPILER "g++")
# 指定Debug模式下编译选项，CMAKE_CXX_FLAGS_DEBUG为cmake内置变量
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
# 指定Release模式下编译选项，CMAKE_CXX_FLAGS_RELEASE为cmake内置变量
# -g表示添加gdb调试选项
set(CMAKE_CXX_FLAGS_RELEASE "-g -O2 -finline-limit=1000")


MESSAGE(STATUS "CMAKE_BUILD_TYPE : ${CMAKE_BUILD_TYPE}")
IF( "${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    MESSAGE(STATUS "CMAKE_CXX_FLAGS : ${CMAKE_CXX_FLAGS_RELEASE} ${CMAKE_CXX_FLAGS}")
ELSE()
    MESSAGE(STATUS "CMAKE_CXX_FLAGS : ${CMAKE_CXX_FLAGS_DEBUG} ${CMAKE_CXX_FLAGS}")
ENDIF()

#-------------------------------------------------------------------------------
# thirdparty dependencies
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# project generation
#-------------------------------------------------------------------------------

# 查找当前目录下的所有源文件
# 并将名称保存到DIR_SRCS 变量中
aux_source_directory(./src DIR_SRCS)
# 向当前工程添加存放源文件的子目录
# 注意，该子目录中须包含CMakeList.txt文件
add_subdirectory(./src/math)
# 添加当前编译目标使用到的头文件搜索路径，多个路径之间用空格分隔
# 如果路径包含空格，可以使用双引号将它括起来
include_directories("${PROJECT_SOURCE_DIR}/math/inc")
# 指定生成目标
add_executable(main .${DIR_SRCS})
# 添加链接库
target_link_libraries(main mathLib)