/* driver_rand0.c 测试rand0.c中的rand0函数 2018-12-21 15:31:59 */
 #include <stdio.h>
 extern int rand0(void);
 int main(void)
 {
    for (int i = 0; i < 5; i ++)
        printf("%hd\n", rand0());
    return 0; 
 }