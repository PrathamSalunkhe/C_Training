//this program is to print the value of integer i, j by passing the addresses of i,j 
//to the function

#include <stdio.h>

void f(int *, int *);   //function declared

int i=0, j=1;
int main()
{
    f(&i,&j);        //function called (called by reference) 
    printf("%d %d\n", i,j);
    return 0;
}
       //address of i and j passed to p and q
void f(int *p, int *q)  //function defined
{
    p = q;       //p will store the address of q
    *p = 2;      //p will store the value 2
}