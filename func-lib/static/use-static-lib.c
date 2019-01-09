// use-static-lib.c 2019-01-05 17:18:02
#include <stdio.h>
extern int add(int, int);
extern int func(int);
int main(void)
{
    printf("%d\n", add(3, 5));
    printf("%d\n", func(100));
}