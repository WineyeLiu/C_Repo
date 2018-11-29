/* tieba1.c -- 2018-11-29 13:23:34 
3箱大小相同的苹果（a） 香蕉（b） 李子（l） 装错了， 不能把水果拿出来放地上。用程序模拟更正之。

分析：
| apple | banana | lizi |
|-------|--------|------|
    a       b        l         正确
    l       a        b         错误
    l       b        a         错误
    b       a        l         错误
    b       l        a         错误
    a       l        b         错误 

    装箱错误的分为两种情况：
    情况1： 一种水果装箱正确、另两种装箱错误。 只需交换另两种水果装箱
    情况2： 三种水果装箱均错误、则需先装箱好一种（随意交换两个箱子的水果）问题退化为情况1

    说明：由于不关注水果本身，直接使用字符代表水果（a = apple, b = banana, l = lizi), 
    数组代表水果箱子。

*/
#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
bool check_single_box(const char *, char, int); // 检查单个箱子，看是不是对应的水果
void swap_fruit(char *, char *, int); // 交换箱子中的水果
void ship(char *, char, int);
void reship(char *, char *, char *, int);

void print_box(const char *, const char *, const char *);

int main()
{
    char a_box[SIZE], b_box[SIZE], l_box[SIZE];

    printf("input 3 characters: (eg. abl lba bla ... )\n");

    ship(l_box, getchar(), SIZE);
    ship(a_box, getchar(), SIZE);
    ship(b_box, getchar(), SIZE);

    printf("Before Reship:\n");
    print_box(a_box, b_box, l_box);

    reship(a_box, b_box, l_box, SIZE);

    printf("\nAfter Reship:\n");
    print_box(a_box, b_box, l_box);

    return 0;

}

bool check_single_box (const char * box, char fruit, int num)
{
    // 可以简单处理、只检查其中一个是否符合，我这里检查全部
    bool ship_right = true;
    int i;
    for (i = 0; i < num; i ++)
    {
        if(*(box + i) != fruit) 
        {
            ship_right = false;
            break;
        }
    }
    return ship_right;
}

void swap_fruit(char * box0, char * box1, int box_size)
{
    char tmp;
    for (int i = 0; i < box_size; i ++)
    {
        tmp = *(box0 + i);
        *(box0 + i) = *(box1 + i);
        *(box1 + i) = tmp;
    }
    return;
}
 
void ship(char * box, char fruit, int size)
{
    for (int i = 0; i < size; i ++)
    {
        *(box + i) = fruit;
    }
    return;
}

void reship(char * a_box, char * b_box, char * l_box, int size)
{
    char wrong_box[3];
    int wrong_num = 0;
    if(!check_single_box(a_box, 'a', size)) 
    {
        wrong_box[wrong_num] = 'a';
        wrong_num ++;
    }

    if(!check_single_box(b_box, 'b', size)) 
    {
        wrong_box[wrong_num] = 'b';
        wrong_num ++;
    }

    if(!check_single_box(l_box, 'l', size)) 
    {
        wrong_box[wrong_num] = 'l';
        wrong_num ++;
    }

    if (wrong_num == 3){
        swap_fruit(a_box, b_box, size);
        reship(a_box, b_box, l_box, size);
    }
    else if (wrong_num == 2) 
    {
        if ((wrong_box[0] == 'a' && wrong_box[1] == 'b')||
        (wrong_box[0] == 'b' && wrong_box[1] == 'a'))
        {
            swap_fruit(a_box, b_box, size);
        }
        if ((wrong_box[0] == 'a' && wrong_box[1] == 'l')||
        (wrong_box[0] == 'l' && wrong_box[1] == 'a'))
        {
            swap_fruit(a_box, l_box, size);
        }
        if ((wrong_box[0] == 'l' && wrong_box[1] == 'b')||
        (wrong_box[0] == 'b' && wrong_box[1] == 'l'))
        {
            swap_fruit(b_box, l_box, size);
        }
    }
    else {
        return;
    }
    return;
}

void print_box(const char * a_box, const char * b_box, const char * l_box)
{
    printf("\n\ninside a_box:\n");
    for (int i = 0; i < SIZE; i++){
        printf("%-4c", a_box[i]);
    }
    printf("\n\ninside b_box:\n");
    for (int i = 0; i < SIZE; i++){
        printf("%-4c", b_box[i]);
    }
    printf("\n\ninside l_box:\n");
    for (int i = 0; i < SIZE; i++){
        printf("%-4c", l_box[i]);
    }
}