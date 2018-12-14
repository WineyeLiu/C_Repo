/* str_output.c  2018-12-07 16:18:44
*/
#include <stdio.h>
int main(void)
{
    char a[] = "ABS";
    puts(a);
    printf("puts has \\n on the end.\n");
    fputs(a, stdout);
    printf("but fputs has no \\n on the end\n");
    return 0;
}
