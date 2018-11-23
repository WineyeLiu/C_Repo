#include <stdio.h>
#define SIZE 10
int main(void)
{
    char a[SIZE];
    for (int i = 0; i < SIZE - 1; i++)
    {
        a[i] = i + 97;
    }
    a[SIZE-1] = '\0';
    printf("%s", a);
    return 0;
}