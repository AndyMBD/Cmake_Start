cmake_minimum_required(VERSION 3.12)

project(Cmake C)

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)
add_subdirectory(./Cmake_001)
add_subdirectory(./Cmake_dll_001)
# add_subdirectory(./Cmake_002)
add_subdirectory(./Cmake_003)

