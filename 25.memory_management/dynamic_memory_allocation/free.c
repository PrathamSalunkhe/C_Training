//this program is to understand the free() function

#include<stdio.h>
#include<stdlib.h>

int *input();   //declaring function which returning a ptr

int main()
{
    int i, sum = 0;
    int *ptr = input(); //calling function
    for(i=0;i<5;i++)
    {
        sum += *(ptr + i);
    }
    printf("Thr sum is: %d", sum);
    
    free(ptr);  //releasing the memory using free() function
    ptr = NULL; //assign NULL value to ptr

    return 0;
}

int *input()    //defining function
{
    int *ptr, i;
    ptr = (int*)malloc(5*sizeof(int));  //allocating memory dynamically
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", ptr+i);
    }

    return ptr; //returning ptr
}