/* vararr2d.c -- 变长数组
2018-11-29 21:04:35 */
#include <stdio.h>
#define ROW 3
#define COL 4
int sum2d(int row, int col, int ar[row][col]);
int main(void)
{
    int i,j;
    int rs = 3;
    int cs =  10;

    int a[ROW][COL] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {1, 1, 1, 1}
    };

    int b[ROW - 1][COL + 1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int varr[rs][cs]; // 变长数组
    for (int i = 0; i < rs; i ++)
        for (int j = 0; j < cs; j ++)
            varr[i][j] = i * j + j;

    printf("sum of a = %2d\n", sum2d(ROW, COL, a));
    printf("sum of b = %2d\n", sum2d(ROW - 1, COL + 1, b));
    printf("sum of varr = %2d\n", sum2d(rs, cs, varr));
    
    return 0;
}

int sum2d(int rows, int cols, int ar[rows][cols])
{
    int total = 0;
    for (int i = 0; i < rows; i ++)
        for (int j = 0; j < cols; j ++)
            total += ar[i][j];
    
    return total;
}
