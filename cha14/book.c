/* book.c 2018-12-25 16:46:41 */
#include <stdio.h>
#define MAX_TIT_LEN 41
#define MAX_AUT_LEN 31
struct book {
    char title[MAX_TIT_LEN];
    char author[MAX_AUT_LEN];
    float value;
};
int main(void)
{
    struct book library;
    printf("Please enter the title:\n");
    gets(library.title);
    printf("Now Enter the author:\n");
    gets(library.author);
    printf("Now enter the value:\n");
    scanf("%f", &library.value);
    printf("%s by %s : $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");

    return 0;
}
