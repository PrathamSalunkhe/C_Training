//this program is to check the number is pallindrom or not

#include <stdio.h>
int main()
{
    int n, result = 0, q, rem;
    printf("Enter the number\n");
    scanf("%d", &n);

    q=n;  //stored the number in quotient

    while(q!=0)
    {
        rem = q % 10;      //modulus the num & it will give you reminder
        result = result*10 + rem;  //multiply result by 10 and add the reminder into result 
        q= q/10;      //divide the quotient
    }
    if(result == n)  //compare the result with number _ if it satisfies
    {                 
        printf("The number is palindrome\n");   //the no. is pal.
    }
    else
    {
        printf("The number is not a pallindrome\n");  //the no. is not pal.
    }
    return 0;
}