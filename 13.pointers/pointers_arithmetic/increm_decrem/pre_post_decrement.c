//tihs program is to perform the pointer arithmetic using pre post decrement operator
#include <stdio.h>
int main()
{
    int a[] = {3,4,54,34,67,38,25,75};
    int *p = &a[3];
    printf("%d ", *(--p));
    printf("%d ", *(p--));
    return 0;
}