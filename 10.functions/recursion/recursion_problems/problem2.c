//this program is based on recursion 

#include <stdio.h>
int main()
{
    fun1(4);
}

void fun1(int n)
{
    int i=0;
    if(n>1)
        fun1(n-1);
    for(i=0;i<n;i++)
        printf("*");
}