/* extern_var.c 文件作用域的变量特征  2018-12-21 14:08:07 */
#include <stdio.h>
int times = 0;
void func(void);
int main(void)
{
    extern int times; // 可选的声明
    puts("How many times did James Harden, the Houston Rocket shooting guard dunks last season?");
    scanf("%d", &times);
    while (times != 34)
    {
        func();
    }
    puts("Yes, Exactly!");
    return 0;
}
void func(void)
{
    puts("No no!");
    scanf("%d", &times);
    return;
}
