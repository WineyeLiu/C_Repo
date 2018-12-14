/* str_end.c 2018-12-07 17:12:32
*/
#include <stdio.h>
int main(void)
{
    char str[] = "hello";
    printf("%d\n", *(str + 5));
    printf("%c\n", *(str + 5));
    printf("%d\n", '\0');
    return 0;
}