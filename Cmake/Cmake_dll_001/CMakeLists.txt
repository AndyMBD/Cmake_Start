cmake_minimum_required(VERSION 3.16)
project(dll_learn)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(BUILD_SHARED_LIBS ON)
ADD_SUBDIRECTORY(dll)
ADD_SUBDIRECTORY(cJSON)

add_executable(run_dll ${CMAKE_CURRENT_SOURCE_DIR}/demo/run_dll.c)
