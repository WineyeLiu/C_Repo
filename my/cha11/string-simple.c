/* string-simple.c -- 字符串基础
2018-11-30 13:02:14
*/
#include <stdio.h>
#define MSG "hello world."
#define LIM 5
#define LEN 100
int main(void)
{
    char name[LEN];
    char talent[LEN];
    int i;
    const char m1[100] = "zyq."; 
    const char m2[] = "lwa";
    const char * m3 = "hello, what's you name?\n";
    const char * mytal[LIM] = {
        "aaaa",
        "bbbb",
        "cccc",
        "dddd",
        "eeee"
    };
    for (i = 0; i < LIM; i++)
        puts(mytal[i]);
    puts(m3);
    gets(name);
    puts(name);
    return 0;
}