cmake_minimum_required(VERSION 3.26)

project(C_Learn C)

set(CMAKE_C_STANDARD 11)
include(${CMAKE_SOURCE_DIR}/toolchains/toolchain_gcc.cmake)

# add_subdirectory(./Cmake/Cmake_001)
# add_subdirectory(./Cmake/Cmake_002)
# add_subdirectory(./Cmake/Cmake_003)

# add_subdirectory(./uncrustify)

# add_subdirectory(./UML_C/Encapsulate/Encapsulate_01)
# add_subdirectory(./UML_C/Encapsulate/Encapsulate_02)
# add_subdirectory(./UML_C/Encapsulate/Encapsulate_03)
# add_subdirectory(./UML_C/Encapsulate/Encapsulate_04)
# add_subdirectory(./UML_C/Encapsulate/Encapsulate_05)
# Inheritance
# add_subdirectory(./UML_C/Inheritance/Inheritance_01)
# add_subdirectory(./UML_C/Inheritance/Inheritance_02)
# Polymorphism
# add_subdirectory(./UML_C/Polymorphism/Polymorphism_01)
# add_subdirectory(./UML_C/Polymorphism/Polymorphism_02)
# add_subdirectory(./UML_C/Polymorphism/Polymorphism_03)
# add_subdirectory(./UML_C/Polymorphism/Polymorphism_04)
# add_subdirectory(./UML_C/Callback/Callback_01)
# add_subdirectory(./UML_C/Callback/Callback_02)

# # C_OOP_DEMO
# add_subdirectory(./UML_C/C_OOP_DEMO)
# add_subdirectory(./UML_C/Object_Oriented_Programming_with_ANSI_C)
# if(${MCU_REV} STREQUAL latest)
#     get_latest_mcu_revision(MCU_REV) # Find actual revision if only the "latest" pseudo revision has been set
# endif()
add_subdirectory(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH})
# add_subdirectory(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH}/Ch_1_2_3)
# add_subdirectory(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH}/Ch_1_2_4)
# add_subdirectory(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH}/Ch_1_2_5)
# add_subdirectory(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH}/Ch_2_1_5_4_Observer_Pattern)
# message(${CMAKE_SOURCE_DIR}/${PROJECT_SRC_PATH})
# add_subdirectory(./UML_C/Struct_Function_Pointer)
# C Unit Test unity
# Generic compiler/assember include directories (check CMake files that create executable or library targets for further specific include dirs)