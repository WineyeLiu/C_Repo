/* goto_example.c */
#include <stdio.h>
int main(void)
{
    lable0: for (int i = 0; i < 10; i++) 
    {
        printf("%d\n", i);
        if(i == 5)
            goto lable1; 
    }
    lable1: printf("finished ! \n");
    return 0;
}