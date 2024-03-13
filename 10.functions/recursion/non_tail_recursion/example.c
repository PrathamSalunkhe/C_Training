//example of non tail recursion

#include <stdio.h>

void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);  //this recursive call is not the last thing done by function
    printf("%d ", n);   //this is to evaluate after return
}

int main()
{
    fun(3);
    return 0;
}