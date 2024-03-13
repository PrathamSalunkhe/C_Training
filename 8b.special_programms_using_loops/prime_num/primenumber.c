//this program is to find the number is prime number or not

#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number");
    scanf("%d", &n); //take number from user

    for(i=1;i<=n;i++) //using for loop check the number completely divides or not
    {                 //run the for loop from 1 to that number
        (n%i==0);    //if number completely divides then increment the count
        count++;

    }                 //number will divide by 1 and itself, if it is prime number.
    if(count==2)   //if the count==2 then the number will be prime number
    {
        printf("%d is the prime number\n", n);
    }
    else    
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;    
}