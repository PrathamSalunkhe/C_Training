//this program is to understand the realloc() function

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    int *ptr = (int*)malloc(2*sizeof(int)); //allocating memory two first two numbers
    if(ptr == NULL)
    {
        printf("Memory not available\n");
        return 1;
    }

    printf("Enter two numbers:\n"); //storing that two numbers
    for(i=0;i<2;i++)
    {
        scanf("%d", ptr+i);
    }

    ptr = (int*)realloc(ptr, 4*sizeof(int));    //allocating memory to another two numbers
    printf("size is: %ld\r\n", sizeof(ptr));
    if(ptr == NULL)
    {
        printf("Memory not available\n");
        return 1;
    }

    printf("Enter another two numbers: \n");    //storing that two numbers
    for(i=2;i<4;i++)    //starting the loop from i=2, because we are adding numbers from 3rd pos.
    {
        scanf("%d", ptr+i);
    }

    printf("The numbers are: \n");  //printing all the four numbers
    for(i=0;i<4;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    printf("size is: %ld\n", sizeof(ptr));
    return 0;
}