/* struct_char_ptr.c 结构中指针表示的字符串 2019-01-02 12:58:26 */ 
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

struct namect {
    char * last;
    char * first;
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(struct namect *);
void cleanup(struct namect *);

int main(void) 
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    return 0;
}

void getinfo(struct namect * namect)
{
    char temp[81];
    gets(temp);
    namect->first = (char *)malloc(strlen(temp) + 1);
    strcpy(namect->first, temp);
    gets(temp);
    namect->last = (char *)malloc(strlen(temp) + 1);
    strcpy(namect->last, temp);
}

void makeinfo(struct namect * namect)
{
    namect->letters = strlen(namect->first) + strlen(namect->last);
}

void showinfo(struct namect * namect)
{
    printf("%s %s has %d letters.\n", namect->first, namect->last, namect->letters);
}

void cleanup(struct namect * namect)
{
    free(namect->first);
    free(namect->last);
}
