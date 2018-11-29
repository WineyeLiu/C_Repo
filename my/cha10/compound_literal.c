/* compound_literal.c -- 复合文字 （数组的文字常量）
2018-11-29 21:26:21 */
#include <stdio.h>

int sum(int *, int);
int main(void)
{
    int * p1;
    p1 = (int []) {1, 2, 3};

    printf("%d\n", p1[2]);

    printf("%d\n", sum((int []){1, 2, 3, 4, 5}, 5));
    return 0;
}
int sum(int * p, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += *(p + i);
    return total;
}