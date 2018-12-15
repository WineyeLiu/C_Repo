/* repeat.c 2018-12-15 23:56:31 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //
    int count;
    printf("the command line has %d arguments.\n", argc);
    for (count = 0; count < argc; count ++)
    {
        printf("%d: %s\n", count, argv + count);
    }
    return 0;
}

