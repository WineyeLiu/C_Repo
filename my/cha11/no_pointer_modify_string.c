/* no_pointer_modify_string.c --
2018-12-03 18:03:45 */
#include <stdio.h>
int main(void)
{
    char * word = "hello";
    printf("print by pointer :%s\n", word);
    printf("change first letter.\n");
    
    *word = 'f';  // cause Segmentation fault.
    /*
     * 应该这样定义
     */
    const char * word1 = "word"; // 将指针指向常量
    
    //*word1 = 'l'; // 表达式必须是可修改的左值。

    printf("greetings: %s\n", "hello");

    return 0;
}