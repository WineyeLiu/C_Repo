/* swap.c ###### Tue Nov 27 15:49:10 CST 2018 */
#include <stdio.h>
void fake_swap(int, int);
void real_swap(int *, int *);
int main(void)
{
    int a, b;
    a = 10,b = 20;

    printf("Original: a = %3d, b = %3d.\n", a, b);
    fake_swap(a, b);
    printf("With fake_swap: a = %3d, b = %3d.\n", a, b);
    a = 10, b = 20; // 重新赋值
    real_swap(&a, &b);
    printf("With real_swap: a = %3d, b = %3d. \n", a, b);
    return 0;

}
void fake_swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    return;
}

void real_swap(int * v, int * u)
{
    int tmp;
    tmp = *v;
    *v = *u;
    *u = tmp;
    return;
}