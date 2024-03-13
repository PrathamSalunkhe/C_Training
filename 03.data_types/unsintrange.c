//this program will show the range of unsigned integer

#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned int var1 = 0;           //from 0
    unsigned int var2 = UINT_MAX;    //to max because uns. int are only positive integer
    printf("The range of unsigned integer is %u to %u", var1, var2);
    return 0;
}