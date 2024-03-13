//this program is to print the 1d array using pointer

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements to store in an array: ");
    scanf("%d", &n);   //ask the user to enter the length of an array

    int a[n], *p;
    printf("Enter the %d elements in an array\n", n);
    for(p=&a[0];p<&a[n];p++)   //init. p points to first element of array, then p increments
    {
        scanf("%d", p);
    }
    printf("The elements in array are: \n");
    for(p=&a[0];p<&a[n];p++)   //init. p points to first element of array, then p increments
    {
        printf("%d ", *p);
    }
    printf("\n");
}