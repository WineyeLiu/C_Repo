/* ascii2char.c -- 输入ascii码转为char */
#include <stdio.h>
int main(void)
{
    char ch;
    printf("please input a num: \n");
    scanf("%hd", &ch);
    printf("number %hd in ascii is %c.\n", ch, ch);
    return 0;
}