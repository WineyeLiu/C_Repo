/* pt_ops.c ###### Tue Nov 27 19:38:38 CST 2018 */
#include <stdio.h>
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int * p1, * p2, * p3;

    p1 = arr; // 指针赋值
    p2 = & arr[2]; // 指针赋值

    printf("pointer value, dereferenced pointer, pointer address: \n");
    printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);
    printf("p2 = %p, *p2 = %d, &p2 = %p\n", p2, *p2, &p2);

    p3 = p1 + 4;
    printf("p1 + 4 = %p, *(p1 + 3) = %d \n", p1 + 4, *(p1 + 3));

    p1 ++; // 指针自增
    printf("\nafter p1++ \n");
    printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);

    p2 --; // 指针自减
    printf("\nafter p2-- \n");
    printf("p2 = %p, *p2 = %d, &p2 = %p\n", p2, *p2, &p2);

    --p1; ++p2;
    printf("\nPointers reseted !\n");
    printf("p1 = %p, p2 = %p\n", p1, p2);

    // 指针相减
    printf("\np2 - p1 \n");
    printf("p2 - p1 = %d\n", p2 - p1);

    // 指针减去整数
    printf("\np2 - 1\n");
    printf("p2 - 1 = %p \n", p2 - 1);

    return 0;
}