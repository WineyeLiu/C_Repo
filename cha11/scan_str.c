/* scan_str.c 2018-12-07 15:55:33
*/
#include <stdio.h>
int main(void)
{
    char name1[12], name2[12];
    int count;

    printf("\nPlease enter two names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read %d names %s and %s", count, name1, name2);

    return 0;
}