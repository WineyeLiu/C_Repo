/* 2d-pt.c 2018-11-29 10:48:50 */
#include <stdio.h>

int main(void) 
{
    int a[2][3] = {1,2,3,4,5,6};
    printf("a = %p \n", a);
    printf("a[0] = %p\n", a[0]);
    printf("&(a[0][0]) = %p\n", &(a[0][0]));
    
    printf("a = %p, a + 1 = %p\n", a, a + 1);
    printf("a[0] = %p, a[0] + 1 = %p\n", a[0], a[0] + 1);

    printf("*a = %p, *a + 1 = %p\n", *a, *a + 1);

    printf("a[0][0] = %d\n", a[0][0]);
    printf("*a[0] = %d\n", *a[0]);
    printf("**a = %d\n", **a);

    printf("a[1][2] = %d\n", a[1][2]);
    printf("*(*(a + 1) + 2) = %d\n", *(*(a + 1) + 2));

    return 0;
}