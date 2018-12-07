/* name1.c 2018-12-07 14:32:03 */
#include <stdio.h>
int main(void)
{
    char name[100];
    char * ptr;
    printf("what is your name? \n");
    ptr = fgets(name, 99, stdin);
    printf("%s? nice name, %s\n", name, ptr);
    return 0;
}