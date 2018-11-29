/* 2d-pt.c 2018-11-29 10:48:50 */
#include <stdio.h>

int main(void) 
{
    int a[2][3] = {1,2,3,4,5,6};
    printf("a = %p \n", a);
    printf("a[0] = %p\n", a[0]);
    printf("&(a[0][0]) = %p\n", &(a[0][0]));
    



    return 0;
}