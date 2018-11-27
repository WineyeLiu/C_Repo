/* array_sum.c ###### Tue Nov 27 17:44:59 CST 2018 */
#include <stdio.h>
int sum(int [], int);
int main(void)
{
    int input[5] = {1, 2, 3, 4, 5};
    int res = sum(input, 5);

    printf("sizeof input: %u\n", sizeof input);
    printf("sum result is %d\n", res);
    return 0;
}

int sum(int a[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) 
    {
        total += a[i];
    }
    printf("sizeof a: %u\n", sizeof a);
    return total;
}