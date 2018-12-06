/* diff_between_arry_and_pt.c --
    2018-12-03 18:03:14
*/
#include <stdio.h>
int main (void) 
{
    char heart[] = "i love abby.";
    char *head = "i love amy.";

    // 都可以使用数组符号
    for (int i = 0; i < 6; i++)
    {
        putchar(heart[i]);
    }
    putchar('\n');
    for (int i = 0; i < 6; i++)
    {
        putchar(head[i]);
    }
    putchar('\n');

    // 都可以使用指针加法。
    for (int i = 0; i < 6; i++)
    {
        putchar(*(heart + i));
    }
    putchar('\n');
    for (int i = 0; i < 6; i++)
    {
        putchar(*(head + i));
    }
    putchar('\n');

    // 主要区别在于 指针形式为变量，而数组形式作为常量
    // 指针形式可以自增
    while (*(head) != '\0')
    {
        putchar(*(head ++));
    }
    putchar('\n');
    return 0;
}