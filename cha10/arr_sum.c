/* arr_sum.c ###### Tue Nov 27 18:02:51 CST 2018 */
#include <stdio.h>
#define SIZE 5

int sump(int *, int *);
int main(void)
{
    int nums[SIZE] = {1,2,3,4,5};
    int res = sump(nums, nums + SIZE);
    printf("result is %7d.\n", res);
    return 0;
}
int sump(int * start, int * end)
{
    int total = 0;
    while (start < end) 
    {
        total += *start;
        start ++;
    }
    return total;
}