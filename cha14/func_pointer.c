/* func_pointer.c 函数指针  2019-01-03 10:57:39 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void show(void (* funcp)(char *), char * str);
void to_upper(char *);

int main(void)
{   char str[] = "liuwenai";
    show(to_upper, str);
    //putchar(toupper('a'));
}

void show(void (* funcp)(char *), char * str)
{
    (*funcp)(str);
    puts(str);
}

void to_upper(char * str)
{
    while(*(str) != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}