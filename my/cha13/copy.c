/* copy.c 联系文件操作 2018-12-24 19:58:55 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE * fpin;
    FILE * fpout;
    char ch;
    
    if ((fpin = fopen("copy.c", "r")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    if ((fpout = fopen("copy.txt", "w")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fpin)) != EOF)
    {
        putc(ch, fpout);
    }
    if(fclose(fpin) != 0)
        exit(EXIT_FAILURE);
    if(fclose(fpout) != 0);
        exit(EXIT_FAILURE);
    return 0;
}