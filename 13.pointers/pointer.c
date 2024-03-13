//this program is to print the pointer value

#include <stdio.h>
int main()
{
    int i=1;
    int *p = &i;
    /*q = p;
    *q = 5;*/
    printf("%d", *p);
}