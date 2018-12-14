/* test_fit.c 2018-12-14 23:18:12*/
#include <stdio.h>
#include <string.h>
void fit(char * string, int size);
int main(void)
{
    char * str = "hello world!";
    //printf("%s\n", str);
    puts(str);
    fit(str, 80);
    //printf("%s\n", str);
    puts(str);
    return 0;
}

void fit (char * string, int size)
{
    printf("%p\n", string);
    if(strlen(string) > size)
    {
        *(string + size) = '\0';
    }
    return;
}