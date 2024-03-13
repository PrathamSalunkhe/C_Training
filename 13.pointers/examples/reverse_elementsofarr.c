//this program is to reverse the element in an array using pointers
//we have used array name as a pointer to point the element in an array
#include <stdio.h>
int main()
{
    int a[5], *p;
    printf("Enter the elements of an array: \n");
    for(p=a;p<a+5;p++)
    {
        scanf("%d", p);
    }

    printf("Elements of an array in reverse order are: \n");
    for(p=a+4;p>=a;p--)
    {
        printf("%d %d\n", *p, p);
    }
    printf("\n");
    return 0;
}