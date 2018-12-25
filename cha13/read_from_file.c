/* read_from_file.c 从文件读取内容 2018-12-23 21:29:35 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char filename[] = "info.txt";
    char ch;
    FILE * fp;
    long count = 0;
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open %s \n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count ++;
    }
    fclose(fp);
    printf("there are %ld chars in file %s.\n", count, filename);

    return 0;
}