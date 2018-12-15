/* test_fit.c 2018-12-14 23:18:12*/
#include <stdio.h>
#include <string.h>
void fit(char *, int);
int main(void)
{
    // char * str = "hello world!"; //此处不能以指针形式，会报Segment Fault
    char str[] = "hello world!";
    //printf("%s\n", str);
    puts(str);
    fit(str, 3);
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
