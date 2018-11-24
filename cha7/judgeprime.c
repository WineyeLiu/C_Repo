/* judgeprime.c   判断一个数是不是素数,如果是不是素数，打印所有因数 */
#include <stdio.h>
_Bool isprime(int n);  // ansi 原型
int main(void) 
{
    int n;
    /* 
        关于布尔值：
        1. _Bool 类型是C99标准新增类型，可直接使用。

        2. 也可以包含stdbool.h 可以用bool代替关键字_Bool 并用true false标识符代替0或1
    
    */ 
    _Bool p;
    printf("Pls enter a integer: ");
    scanf("%d", &n);
    p = isprime(n);
    if (p)
        printf("%d is a prime number!\n", n);
    else 
    {
        printf("%d is not a prime number! \n", n);
    }
    return 0;
}

_Bool isprime(int n)
{
    _Bool flag;
    int i;
    for (i = 2, flag = 1; (i*i) <= n; i++) 
    {
        if (n % i == 0) 
        {
            flag = 0;
            if (i * i == n) 
                printf("%d is divisible by %d. \n", n, i);
            else 
                printf("%d is divisible by %d and %d. \n", n, i, n/i);
        }
    }
    printf("flag is %d \n", flag);
    return flag;
}
