//this program is to understand the free() function

#include<stdio.h>
#include<stdlib.h>

int *input();

int main()
{
    int i, sum = 0;
    int *ptr = input(); 
    for(i=0;i<5;i++)
    {
        sum += *(ptr + i);
    }
    printf("Thr sum is: %d", sum);
    
    free(ptr);
    ptr = NULL;

    return 0;
}

int *input()
{
    int *ptr, i;
    ptr = (int*)malloc(5*sizeof(int));
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", ptr+i);
    }

    return ptr;
}