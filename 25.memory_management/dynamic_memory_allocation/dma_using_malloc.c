//this program is to understand the dynamic memory allocation using malloc() function

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    //memory allocated dynamically by using malloc function
    //malloc will allocate memory to n number of integers
    int *ptr = (int *)malloc(n*sizeof(int)); 

    if(ptr == NULL) //if ptr contains NULL
    {
        printf("Memory is not available");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    return 0;
}