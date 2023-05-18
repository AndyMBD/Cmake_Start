# folder structure  
```
folder structure 
│  CMakeLists.txt
│  README.md
├─build                      
├─Release
└─src
    │  main.c
    └─math
        │  CMakeLists.txt 
        ├─inc
        │      math_add.h     
        ├─src
        │      math_add.c    
        └─unit_test
                math_add.py
```
use this command can generate the folder structure automotic into a txt
```
tree C:\D\C\Test_006 /f > C:\D\C\Test_006\result.txt
```
# python call C under unit_test folder
python call c through call dll   