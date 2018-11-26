/* echo_eof.c 以EOF结尾的stdin */
#include <stdio.h>
int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF) 
        putchar(ch);
    return 0;
}