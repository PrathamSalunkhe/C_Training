//tihs program will show the range of integer datatype

#include <stdio.h>
#include <limits.h>  
int main()
{
    int var1 = INT_MIN;  //minimum
    int var2 = INT_MAX;  //maximum
    printf("the range of signed integer is from %d to %d", var1, var2);
    return 0;
}