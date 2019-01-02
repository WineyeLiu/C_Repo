/*struct_save_file.c  结构保存文件 2019-01-02 16:50:05 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_TITL 40
#define MAX_AUTL 40
#define MAX_BKS 10

struct book {
    char title[MAX_TITL];
    char author[MAX_AUTL];
    float value;
};

int main(void)
{
    struct book library[MAX_BKS];
    int count;
    int index,filecount;
    FILE * filep;
    int size = sizeof(struct book);
    if((filep = fopen("book.dat", "a+b"))==NULL) 
    {
        exit(EXIT_FAILURE);
    }
    rewind(filep);

    while(count < MAX_BKS && fread(&library[count], sizeof(struct book), 
        1, filep) ==  1);
    {
        if(count == 0) 
        {
            puts("current book.dat content: ");
        }
        printf("%s by %s: $%.2f.\n", library[count].title, 
            library[count].author, library[count].value);
        count ++;
    }

    filecount = count;
    if(count == MAX_BKS) 
    {
        fputs("book.dat is full.\n", stderr);
        exit(2);
    }

    puts("Please add new book titles.");
    puts("press [Enter] at the start of a line to stop.");

    while (count < MAX_BKS && gets(library[count].title) != NULL &&
        library[count].title[0] != '\0')
        {
            puts("Now enter the author.");
            get(library[count].author);
        }

}