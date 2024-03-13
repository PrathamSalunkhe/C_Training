//this program is to swap elements using call by reference

#include <stdio.h>

int swap(int *p, int *q)   //ptr receives the addresses of variables
{
    int a;    //swapping of two variables
    a = *p;
    *p = *q;
    *q = a;
}

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a ,&b);
 
    //function called
    swap(&a,&b);  //addresses of a,b passed to function 
    printf("After swaping\n");
    printf("a = %d, b = %d\n", a,b);
    return 0;
}