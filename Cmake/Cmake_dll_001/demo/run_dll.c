#include <windows.h>
#include "stdio.h"
#include "stdint.h"
#include "../cJSON/cJSON_Utils.h"

int main()
{
    // define functional pointer
    uint32_t(*p_add)(uint16_t, uint16_t) = NULL;
    char *post_str = NULL;
    cJSON *root = cJSON_CreateObject();

    // HINSTANCE handle = LoadLibrary("./lib_out/my_dll.a");
    HINSTANCE my_dll_handle = LoadLibrary("./lib_out/my_dll.dll");

    p_add = (uint32_t(*)(uint16_t, uint16_t))GetProcAddress(my_dll_handle, "add");

    printf("fout:%d\n",p_add(1, 32));
    FreeLibrary(my_dll_handle);


    cJSON_AddStringToObject(root, "user", "jasonkay");
    cJSON_AddStringToObject(root, "pwd", "hkcw3cjbc");
    post_str = cJSON_Print(root);
    cJSON_Delete(root);
    root = NULL;
    printf("post_str is %s \n",post_str);
    return 0;



}
