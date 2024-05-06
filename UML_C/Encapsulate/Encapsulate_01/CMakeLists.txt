cmake_minimum_required(VERSION 3.12)

<<<<<<< HEAD:UML_C/UML_001/CMakeLists.txt
project(Encapsulating_01 C)
=======
project(Encapsulate_01 C)
>>>>>>> 71655199b5cadb565b6295bff83953cd23a8f552:UML_C/Encapsulate/Encapsulate_01/CMakeLists.txt

set(CMAKE_C_STANDARD 11)

# include_directories(./src/math)
# include_directories(./src/app)

<<<<<<< HEAD:UML_C/UML_001/CMakeLists.txt
add_executable(Encapsulating_001 
               ./src_001/main.c
               ./src_001/Animal.c
               ./src_001/Animal.h
               )

add_executable(Encapsulating_002
                ./src_002/main.c
                ./src_002/Human.c
                ./src_002/Human.h)
=======
add_executable(Encapsulate_01 
               ./src/main.c
               ./src/Animal.c
               ./src/Animal.h
               ./src/Human.c
               ./src/Human.h)
>>>>>>> 71655199b5cadb565b6295bff83953cd23a8f552:UML_C/Encapsulate/Encapsulate_01/CMakeLists.txt


