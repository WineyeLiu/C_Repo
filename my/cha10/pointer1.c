/* pointer1.c 2018-11-29 16:44:42 */
#include <stdio.h>

int main(void)
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int (* p) [3]; // 使用括号让p和*结合，说明它是一个指针类型

    p = a;

    printf("*(*(p + 1) + 2) = %d \n", *(*(p + 1) + 2));
    return 0;
}