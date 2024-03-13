//this program is to understand the null pointer

#include <stdio.h>
int main()
{
    int *p = NULL;

    printf("The address of p is: %d\n", p);  //herer value of p is 0
    printf("%d", *p);        //segmentation fault
    return 0;
}