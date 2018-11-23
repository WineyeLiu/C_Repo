/*  print2.c -- printf() 的更多属性  */
#include <stdio.h>
int main(void) 
{
    unsigned un =  3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d.\n", un, un);
    printf("end = %hd and %d.\n", end, end);
    printf("big = %ld and not %d\n", big, big);
    printf("verybig = %lld and not %d.\n", verybig, verybig);
    return 0;
}