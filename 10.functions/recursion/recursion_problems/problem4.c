#include <stdio.h>
int main()
{
    int a;
    a = fun(5);
    printf("%d",a);
}

int fun(int n)
{
    int x=1, k;
    if(n==1)
        return x;
    for(k=1;k<n;++k)
        x = x + fun(k) * fun(n-k);
    return x;
}