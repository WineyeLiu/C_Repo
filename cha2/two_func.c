// two_func.c 在一个c程序中使用两个函数
#include <stdio.h>
void bulter(void); // ISO/ANSI C 函数原型
int main(void) 
{
    printf("I will summon the bulter function. \n");
    bulter();
    printf("Yes. Bring me some tea and Writeable CD-ROMS. \n");
    return 0;
}

void bulter(void) 
{
    printf("You rang, sir?\n");
}