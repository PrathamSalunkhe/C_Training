//tihs program is to perform the pointer arithmetic using pre increment operator
#include <stdio.h>
int main()
{
    int a[] = {3,4,54,34,67,38,25,75};
    int *p = &a[0];
    printf("%d ", *(++p));
    return 0;
}