//this program is to print the 2d array using pointers

#include <stdio.h>
int main()
{
    int a[2][2];   //there are 4 elements in array
    int *p;

    
    printf("Enter 4 elemnts in array: \n");
    for(p=&a[0][0];p<=&a[1][1];p++)  
    {                 //init. p points to first element of array, then p increments
        scanf("%d", p);
    }

    printf("The elements in an array are: ");
    for(p=&a[0][0];p<=&a[1][1];p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}