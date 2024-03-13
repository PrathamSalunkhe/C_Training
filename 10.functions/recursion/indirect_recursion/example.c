//this program is to print 1 to 10 numbers in such a way that
//when number is odd add 1 and when number is even subtract 1

#include <stdio.h>

void odd();
void even();

int n=1;  //globally declare n=1

void odd()   //odd function calls even function
{
    if(n <=10)
        printf("%d ", n+1);
        n++;
        even();  
    return ;
}

void even()  //even function calls odd function
{
    if(n <=10)
    {
        printf("%d ", n-1);
        n++;
        odd();
    }
}

int main()  //main function calls odd function
{
    odd();
}