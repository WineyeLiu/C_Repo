/* rand0.c 使用ANSI C的可移植随机算发产生随机数 */
static unsigned long next = 1;
int rand0(void) 
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
void randseed(int seed)
{
    next = seed;
}