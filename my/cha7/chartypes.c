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
    }
    return 0;
}
