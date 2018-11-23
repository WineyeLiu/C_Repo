/* floaterr.c -- 浮点数的问题 */
#include <stdio.h>
int main(void)
{
    float a,b;
    b = 2.0E20 + 1.0;
    a = b - 2.0E20;
    printf("result is %f.\n", a);
    return 0;
}