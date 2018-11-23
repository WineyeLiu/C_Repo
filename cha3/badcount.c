/* badcount.c -- 不正确的参数个数 */
#include <stdio.h>
int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;

    printf("%d \n", f, g); // 参数过多
    printf("%d\t%d \n", f); // 参数过少
    printf("%d\t%f \n", h, g); // 值类型不匹配

    return 0;
}