/* struct_init.c 结构体的初始化 2018-12-27 00:02:54 */
#include <stdio.h>
struct book {
    char title[1001];
    double value;
    char author[41];
    int pages; 
};  
int main(void) 
{
    // 初始化 
    // 1. 按照顺序初始化
    struct book b1 = {
        "Harry Potter",
        74.99,
        "J.K Rolling",
        1867
    };
    printf("The author of %s is %s, this book has %d pages, and it take $%.2f.\n",
    b1.title, b1.author, b1.pages, b1.value);

    // 2. 指定初始化字段
    struct book b2 = {
        .title = "Think in Java",
        .value = 108.00
    };

    printf("The author of %s is %s, this book has %d pages, and it take $%.2f.\n",
    b2.title, b2.author, b2.pages, b2.value);

    // 3.使用定义时声明
    struct {
        char name[81];
        char gender;
        int age;
    } lwi = {
        "liuwenai",
        'm',
        26
    };
    printf("name: %s\n"
    "gender:%c\n"
    "age: %d\n\n", lwi.name, lwi.gender, lwi.age);

    return 0;

}