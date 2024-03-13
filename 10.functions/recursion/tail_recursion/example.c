//example of tail recursion

#include <stdio.h>

void fun(int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        printf("%d ", n);
    }
    return fun(n-1);  //this recursive call is the last thing that function does
}

int main()
{
    fun(3);
    return 0;
}