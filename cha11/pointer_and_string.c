/* pointer_and_string.c 
   2018-12-07 11:26:58
*/
#include <stdio.h>
int main(void)
{
    char * message = "just do it !";
    char * copy;
    copy = message;
    printf("copy is %s \n", copy);
    printf("message = %p, &message = %p \n", message, &message);
    printf("copy = %p, &copy = %p\n", copy, &copy);
    return 0;
}