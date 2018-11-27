/* binary_recur.c ###### Tue Nov 27 14:23:02 CST 2018 */
#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long n;
    to_binary(39);
    return 0;
}
void to_binary(unsigned long u)
{
    int r;
    r = u % 2;
    if (u >= 2)
        to_binary(u/2);
    putchar('0' + r);
    return;
}