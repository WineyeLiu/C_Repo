/* dice_driver.c 测试骰子程序 2018-12-21 16:42:04 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
    int dice = 2, roll;
    int sides = 6;
    srand((unsigned int)time(0));
    roll = roll_n_dice(dice, sides);
    printf("you have rolled a %d with %d %d-sided dice.\n",
    roll, dice, sides);
    return 0;
}