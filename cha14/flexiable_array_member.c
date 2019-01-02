/* flexible_array_member.c  结构的伸缩型数组成员 2019-01-02 15:31:42 */
 #include <stdio.h>
 #include <stdlib.h>

struct flex {
    int count;
    double average;
    double scores[]; // flexible array member 伸缩型数组成员
};

void cal_average(struct flex *);
void show_flex(struct flex *);

int main(void)
{
    // score包含五个元素
    struct flex * f1 = (struct flex *) malloc(sizeof(struct flex) + 5*sizeof(double));
    f1->count = 5;
    for(int i = 0; i < f1->count; i++) 
    {
        f1->scores[i] = i + 1;
    }
    cal_average(f1);
    show_flex(f1);
    free(f1);

    return 0;

}

void cal_average(struct flex * fp)
{
    double sum = 0;
    int i;
    for(i = 0; i < fp->count; i++ )
    {
        sum += fp->scores[i];
    }
    fp->average = sum/fp->count;
}

void show_flex(struct flex * fp)
{
    printf("count is %d, average is %.2f. \n", fp->count, fp->average);
}