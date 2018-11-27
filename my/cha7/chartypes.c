/* chartypes.c -- 使用ctype.h */
#include <stdio.h>
#include <ctype.h>
int main(void) 
{
    char a;
    while ((a = getchar())!= '\n') {
        if(islower(a)) 
        {
            a = toupper(a);
        }
        putchar(a); // 问题： 为什么最后字符是输入\n后连续打出来的？
        /*
            因为系统使用了行缓冲输入  line-buffered input
            缓冲输入是ANSI C的标准，ANSI C不提供非缓存输入。
        */
    }
    return 0;
}
