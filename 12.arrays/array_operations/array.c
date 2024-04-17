#include <stdio.h>

int main()
{
    int a,b,c;
    while (1)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if(a<3)
            break;
        c = a+b;
        printf("the addition is %d\r\n", c);
    }
    
    
}