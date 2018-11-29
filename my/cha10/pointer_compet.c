/* pointer_compet.c -- 两层间接运算 不安全 修改了const变量的值
2018-11-29 17:56:40 */
#include <stdio.h>
int main(void)
{
    const int * * pp2;
    int * p1;
    const int n = 10;
    pp2 = &p1;

    *pp2 = &n;

    *p1 = 100;

    printf("n is %d\n", n);
    return 0;
}