/* str_func_test.c 2018-12-15 18:00:01 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[1024] = "hello";
    char str2[] = " world";
    char str3[] = "hello";
    char str4[] = "helmet";
    char str5[1024];
    char str6[100];

    // strlen
    printf("%d\n", strlen(str1));
    
    // strcat & strncat
    puts(strcat(str1, str2));
    puts(strncat(str1, str2, 8)); // n第二个参数的字符串字符最多个数

    // strcmp & strncmp
    printf("%d\n", strcmp(str1, str3));
    printf("%d\n", strncmp(str3, str4, 3)); // strncmp 比较给定个数字符

    // strcpy & strncpy
    strcpy(str5, strcat(str1, str2));
    puts(str5);

    strncpy(str6, str3, 2);
    puts(str6);

    return 0;
}
