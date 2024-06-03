# C learn roadmap
## vscode cmake toolset
### tool list
1. cmake shall be install
2. msys64 install according to guidance https://code.visualstudio.com/docs/cpp/config-mingw
3. vscode extension cmake c tool install
4. since this folder have so many project, use cmake preset to handle different project.eg: add a preset for Design_Pattern_For_Embedded_System_In_C to focus on this book
5. after select the preset, in the cmakelist,can define include folder,and the launch.json will automoticly launch target when debug the target
## cmake learn 
1. Cmake_001 start with the cmake step learn  
1. python call C under CMake_002
1. to start with Makefile and Cmake
## doxygen_shpinx_plantuml
1: This folder contain all tools setup for develop
### generate folder tree
use this command can generate the folder structure automotic into a txt
```c
tree C:\D\C\Test_006 /f > C:\D\C\Test_006\result.txt
```
## UML use C
### classes in C https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
### Design_Pattern_For_Embedded_System_In_C
### complie generate map file
```cmake
set(CMAKE_EXE_LINKER_FLAGS "-Wl,-Map=${PROJECT_NAME}.map")
```
## TODO: Cmake generate map file