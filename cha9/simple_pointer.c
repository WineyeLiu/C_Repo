/* simple_pointer.c ###### Tue Nov 27 15:35:55 CST 2018 */
#include <stdio.h>

int main(void)
{
    int * p; // 通常在声明时* p之间会打一个空格
    int n = 10;
    p = &n;
    printf("%p \n", p);
    printf("%d \n", *p); // 而使用指针求值的时候不打空格
    return 0;
}