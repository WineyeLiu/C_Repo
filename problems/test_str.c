/* test_str.c */
#include <stdio.h>
int main(void) {
    // char * str 如果这么声明，通过指针修改字符串是有问题的，具体原因后续章节？
    char str[] = "hello world !";
    *(str + 2) = 'A';
    puts(str);
    return 0;
}