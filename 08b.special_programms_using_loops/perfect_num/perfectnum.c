//this program is to find the number is perfect number or not

#include <stdio.h> 
int main()
{
    int number;
    printf("Enter a number: \n");  //take number from user
    scanf("%d", &number);

    int i,rem, sum=0;
    for(i=1;i<number;i++)
    {
        rem = number % i; //divide the number by 1 to the range and stored its reminder in rem
        if(rem == 0)     //those numbers who completely divides the number 
        {
            sum = sum + i;  //add them together
        }
    }
    if(sum == number)   //if that sum and number equals then the number is perfect number.
    {
        printf("%d is a perfect number\n", number);
    }
    else
    {
        printf("%d is not a perfect number\n", number);
    }
    return 0;
}