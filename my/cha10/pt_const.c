/* pt_const.c  2018-11-28 16:45:02 */
#include <stdio.h>
#define SIZE 5
int sum_arr(const int *, int);
int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5};
    const int * r = a;       // 指向常量的指针，不能修改*r的值
    int * const p = a;       // 指针本身是个常量，p只能指向初始化的指针，不能指向别的不能修改p的值
    const int * const q = a; // 指针本身是个常量， 指向的的也是个常量，既不能给q赋值也不能修改*q的值

    int sum;

    r ++; // 可以
    //*r = 100; // 不可以

    //p++; // 不可以
    *p = 100; // 可以

    //q++;     // 不可以
    //*q = 200;// 不可以
    printf("a = %p\n", a);

    sum = sum_arr(a, SIZE);
    printf("The sum is %d\n", sum);
   
    return 0;
}

int sum_arr(const int * v, int n)
{
    printf("v = %p\n", v);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += *(v + i);
        printf("*(v + i) = %d\n", *(v + i));
    }
    return total;
}

