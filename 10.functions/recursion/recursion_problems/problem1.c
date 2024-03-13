//this program is based on recursion 

#include <stdio.h>
int main()
{
    get(6);
}

void get(int n)
{
    if(n<1)
        return;
    get(n-1);
    get(n-3);
    printf("%d\n", n);
}