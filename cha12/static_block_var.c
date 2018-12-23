/* static_block_var.c 局部静态变量的特性 2018-12-21 13:42:59 */
#include <stdio.h>
void func(void);
int main(void)
{
    for (int i = 0; i < 3; i++){
        printf("loop time(s): %d\n", i + 1);
        func();
    }
    return 0;
}

void func(void)
{
    int a = 1;
    static int b = 1;
    printf("a = %d and b = %d \n", a++, b++);
    return ;
}