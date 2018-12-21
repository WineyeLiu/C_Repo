/* test_sprintf.c 2018-12-17 20:46:29 */
#include <stdio.h>
int main(void) 
{
    char s[1024];
    sprintf(s, "%d", 123);
    puts(s);
    return 0; 
}