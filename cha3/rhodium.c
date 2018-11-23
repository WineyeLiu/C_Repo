// rhodium.c -- 用金属铑衡量体重
#include <stdio.h>
int main(void)
{
    float weight, value; // 体重和 对应的铑重量的价值
    printf("Are you worth you weight in rhodium? \n");
    printf("Let's check it out. \n");
    printf("Pls input your weight in KG... \n");

    // 用户输入重量
    scanf("%f", &weight);
    // rh的价格未510USD/oz 1oz = 28.350g
    value = weight * 1000 * 510 /31.10;
    printf("Your weight in rhodium is worth %.2fUSD. \n", value);
    printf("You are easily worth that! If rhodium price drop. \n");
    printf("Eat more to maintain your value. \n");
    return 0;
}
