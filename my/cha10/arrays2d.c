/* arrays2d.c -- 处理2维数组的函数
*/
#include <stdio.h>
#define ROW 3
#define COL 4
void sum_rows(int ar[][COL], int rows);
void sum_cols(int [][COL], int);
int sum2d(int (* p)[COL], int rows);
int main(void)
{
    int a[ROW][COL] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {1, 1, 1, 1}
    };

    sum_cols(a, ROW);
    sum_rows(a, ROW);
    
    printf("sum of array: %d\n", sum2d(a, ROW));
    return 0;
}
void sum_rows(int ar[][COL], int rows)
{
    int total;
    for (int r = 0; r < rows; r++)
    {
        total = 0;
        for (int c = 0; c < COL; c++)
            total += ar[r][c];
        printf("row %d sum is %2d\n", r, total);
    }
    return;
}

void sum_cols(int ar[][COL], int rows)
{
    int total; 
    for (int c = 0; c < COL; c++) 
    {
        total = 0;
        for (int r = 0; r < rows; r++)
            total += ar[r][c];
        printf("col %d sum is %2d\n", c, total);
    }
    return;
}

int sum2d(int (* p) [COL], int rows)
{
    int total = 0;
    for (int r = 0; r < rows; r ++)
    {
        for (int c = 0; c < COL; c++)
            total += *(*(p+r)+c);
    }
    return total;
}
