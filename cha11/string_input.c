/* string_input.c 2018-12-07 13:46:32 */
#include <stdio.h>
int main(void)
{
    /* char * name;
    scanf("%s", name); */
    // 上面的代码是错误的，name是一个指针，没有进行初始化，也没有指明内存
    char name[100];
    printf("What is your name?\n");
    gets(name);
    printf("Nice name, %s.\n", name);

    return 0;
}