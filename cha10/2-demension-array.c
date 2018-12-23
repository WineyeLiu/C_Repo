/* 2-demension-array.c
2维数组
2018-12-21 21:27:48
*/
#include <stdio.h>
int main(void)
{
    int count = 0;
    int a[2][3] = {
                    {1,2,3},
                    {4,5,6}
                  };
    // 查看每个元素的内存地址
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("num: %2d, addr: %p\n", count++, &a[i][j]);
    
    int (* p3) [3];
    p3 = a;
    printf("size of p3 is %zd, value of p3 is %p.\n", sizeof(p3), p3);
    printf("size of p3 + 1 is %zd, value of p3 + 1 is %p.\n", sizeof(p3 + 1), p3 + 1);
    printf("\n");

    printf("size of *p3 is %zd, value of *p3 is %p. \n", sizeof(*p3), *p3);
    printf("size of *p3 + 1 is %zd, value of *p3 + 1 is %p. \n", sizeof(*p3 + 1), *p3 + 1);

    printf("\n");
    printf("value of **p3 is %d.\n", **p3);

    return 0;
}