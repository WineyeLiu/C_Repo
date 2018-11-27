/* const_pt.c -- 
ON 2018-11-28 00:13:28 */
#include <stdio.h>
#define SIZE 5
int main(void)
{
    const double * p;
    double darr[SIZE] = {1, 2, 3, 4, 5};
    /*
        p 是指向 double 常量的指针
        也就是说 指针p 是指向 double 常量的 所以不可以使用指针p来修改指向的值
        不要理解为p是常量，而是p指向的double是常量 
    */ 
   p = darr;
   p ++;
   printf("p = %p, *p = %g \n", p, *p);
   // expression must be a modifiable lvalue 必须是可修改的左值
   //*p = 3.14;    

   return 0;
}