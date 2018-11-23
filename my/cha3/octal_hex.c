/** octal_hex.c -- 测试直接赋值8进制 16进制 整数类型*/
#include <stdio.h>
int main(void) 
{
    // 8进制
    int i = 012;
    int j = 0x11;

    printf("octal: %#o, dec: %d.\n", i, i);
    printf("hex: %#x, dec: %d.\n", j, j);

    return 0;
}