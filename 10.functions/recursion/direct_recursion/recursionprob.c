//problem based on recursion in function

#include <stdio.h>

int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7 + fun(n-2);  //fun(4), fun(2) and fun(0) three times iterate
    }                         //return 7 two times and return 1 one time, so 7+7+1=15
}

int main()
{
    printf("%d", fun(4));
    return 0;
}