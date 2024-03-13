//this program is to compare two pointers using different operators

#include <stdio.h>
int main()
{
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[1], *q = &a[5];

    printf("%d ", *(p+3));  //add integer to pointer
    printf("%d ", *(q-3));  //subtract integer from pointer
    printf("%d ", (q-p));   //subtract two pointer's addresses
    printf("%d ", p < q);   //compare two pointer's addresses using relational operator
    printf("%d ", *p < *q); //compare two pointers using relational operator
    return 0;
}
