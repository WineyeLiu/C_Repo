/*  judgeprime2.c  -- 使用stdbool.h 头文件 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long divi;
    bool isprime;

    printf("Pls enter an integer for analysis: ");
    printf("Enter q to quit. \n");
    while (scanf("%lu", &num) == 1)
    {
        for (divi = 2, isprime = true; (divi * divi) <= num; divi ++)
        {
            if(num % divi == 0) 
            {
                if ((divi * divi) != num) 
                {
                    printf("%lu is divisible by %lu and %lu. \n", num, divi, num / divi);
                } 
                else 
                {
                    printf("%lu is divisible by %lu. \n");
                }
                isprime = false;
            }
        }
        if (isprime) 
        {
            printf("%lu is prime. \n", num);
        }
    }

}