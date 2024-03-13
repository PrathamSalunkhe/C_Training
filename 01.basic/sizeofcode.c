// tihs code is write to learn the size of code
#include <stdio.h>

static int i;            //it will store in bss segment
static int i = 35;       //it will store in data segment
static int i;
int main()
{
    //static int i;
    printf("%d", i);
    return 0;
}