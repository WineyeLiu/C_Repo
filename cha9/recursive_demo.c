/* recursive_demo.c - ###### Tue Nov 27 13:56:52 CST 2018 */
#include <stdio.h>
void up_n_down(int);

int main(void)
{
    up_n_down(1);
    return 0;
}

void up_n_down(int n)
{
    printf("Level %d: n location %p \n", n, &n);
    if (n < 4)
        up_n_down(n + 1);
    printf("LEVEL %d: n location %p \n", n, &n);
}
