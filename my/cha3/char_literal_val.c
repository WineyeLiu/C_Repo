/* char_literal_val.c -- 证明char的字面值实际上是int */
#include <stdio.h>
int main(void)
{
    char c = 'FATE';
    printf("the real value of c is %c. \n", c);
    return 0;
}