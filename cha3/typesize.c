/* typesize.c -- 输出类型的大小 */
#include <stdio.h>
int main(void)
{
    /** C99标准提供 %zd 表示类型大小 */
    printf("Type int has a size of %u bytes. \n", sizeof(int));
    printf("Type char has a size of %u bytes. \n", sizeof(char));
    printf("Type long has a size of %u bytes. \n", sizeof(long));
    printf("Type double has a size of %u bytes. \n", sizeof(double));
    return 0;
}