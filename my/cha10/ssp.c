/* ssp.c star-star-pointer ###### Tue Nov 27 21:03:13 CST 2018 */
#include <stdio.h>
int main(void)
{
    int * * p;
    int * p1;
    int m = 10;
    p1 = &m;
    
    p = &p1;
    
    printf("p is %p", p);

    return 0;
}