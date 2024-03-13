//this program is to print the value of "a" and "b"

#include <stdio.h>

void swap(int *x,int *y)
{
    static int *temp;   //in this function 
    temp = x;         //swaping is of addresses not the values
    x = y;            //so, the function will not effective
    y = temp;
}

void printab()
{
    static int i, a = -3, b = -6;  //as the value of integer are static
    i = 0;                //so, they will retain the value even after execution of function
    while(i<=4)
    {
        if((i++)%2==1) //if this condition satisfies
            continue;  //then this statement will execute the process continues

        a = a + i;    //if above condition does not satisfies
        b = b + i;   //then these two statements will execute 
    }
    swap(&a, &b);    //swap function called
    printf("a = %d, b = %d\n",a,b); 
}
 
int main()
{
    printab();  //function called 1 time
    printab();  //function called 2 time
}