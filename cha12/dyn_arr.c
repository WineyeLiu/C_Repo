/* dyn_arr.c -- 为数组动态分配存储空间 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double * ptr;
    ptr = (double *)malloc(5 * sizeof(double));
    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = (1 + i) * 10.0 / 9;
    }
    for (int i = 0; i < 5; i++)
        printf("%7.2f\n", ptr[i]);
    
    free(ptr);

    printf("size of int : %zd \n", sizeof(int));
    return 0;
}