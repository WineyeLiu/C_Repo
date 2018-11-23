// fathms_ft.c --把两个fathoms换算成英尺
/**
 *  fathom 英寻 水深测量单位
 * 
 */
#include <stdio.h>
int main(void) 
{
    int feet, fathoms;

    fathoms = 2;
    feet = fathoms * 6;

    printf("There are %d feet in %d fathoms! \n", feet, fathoms);
    printf("Yes, I said %d feet!", 6 * fathoms);
    
    return 0;
}