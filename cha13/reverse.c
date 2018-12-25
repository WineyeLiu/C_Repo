/* reverse.c 2018-12-25 09:24:41 */
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    FILE * in, * out;
    char text_file[] = "info.txt";
    char out_put_file[] = "reverse.txt";
    long filesize;

    if ((in = fopen(text_file, "r")) == NULL)
    {
        fprintf(stderr, "open file %s failed.\n", text_file);
        exit(EXIT_FAILURE);
    }
    if ((out = fopen(out_put_file, "w")) == NULL)
    {
        fprintf(stderr, "open file %s failed.\n", out_put_file);
        exit(EXIT_FAILURE);
    }
    if(fseek(in, 0L, SEEK_END) != 0)
    {
        fprintf(stderr, "file %s seek failed!", text_file);
        exit(EXIT_FAILURE);
    }
    filesize = ftell(in); // 注意ftell把EOF也算进去了
    for (long i = 1L; i <= filesize; i++)
    {
        fseek(in, -i, SEEK_END);
        char ch = fgetc(in);
        fputc(ch, out);
    }
    if(fclose(in) != 0 || fclose(out) != 0)
    {
        fprintf(stderr, "error closing files");
        exit(EXIT_FAILURE);
    }
    return 0;
}