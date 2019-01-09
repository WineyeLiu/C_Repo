// usedll.c 2019-01-05 17:56:46
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void)
{
    /* code */
    int val;
    int (* add_d)(int, int);
    int (* func_d)(int);

    void * handle;
    char * err;

    handle = dlopen("libdemo.so", RTLD_LAZY);
    if(handle == (void *)0)
    {
        fputs(slerror(), stderr);
        exit(EXIT_FAILURE);
    }
    add_d = dlsym(handle, "add");
    err = dlerror();
    if(err != NULL)
    {
        fputs(err, stderr);
        exit(EXIT_FAILURE);
    } 

    func_d = dlsym(handle, "func");
    err = dlerror();
    if(err != NULL)
    {
        fputs(err, stderr);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*add_d)(3, 5));
    printf("%d\n", (*func_d)(100));

    dlclose(handle);

    return 0;
}

