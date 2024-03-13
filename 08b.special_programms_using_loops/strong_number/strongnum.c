//program to find the number is strong number or not

#include <stdio.h>
int main()
{
    int n, q, fact=1, i, rem, result=0;
    printf("Enter a number\n");
    scanf("%d", &n);

    q = n;  //store the number in q
    while(q!=0)
    {
        rem = q%10;    //store the reminder
        for(i=1;i<=rem;i++)
        {
            fact = fact * i;  //factorization ex. fact= 1*1, 1*2, 2*3, 6*4, 24*5 = 120
        }
        result = result + fact;   //store resaut
        fact = 1;
        q = q/10;
    }

    if(result == n)  //compare result with the og number
    {
        printf("%d is a strong number\n", n);
    }
    else
    {
        printf("%d is not a strong number\n", n);
    }
    return 0;
}