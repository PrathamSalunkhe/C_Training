//sum of digits of given number

#include <stdio.h>

int main()
{
    int i, sum=0, a;
    printf("Enter a number\n");
    scanf("%d", &i);
    while(i!=0)
    {
        a = i%10;  //here number will be separeted
        i = i/10;  
        sum = sum + a;   //separated digit will add here
    }
    printf("Sum of all digits is: %d\n", sum);
    return 0;
}