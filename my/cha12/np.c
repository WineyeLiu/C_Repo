/* np.c 看一下空指针 2018-12-21 17:16:16 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * p;
    p = (double *)malloc(1);
    *p = 100l;
    printf("%p \n", p);
    printf("%ld \n", *p);
    printf("null = %d, %p\n", NULL, NULL);
    
    return 0;
}