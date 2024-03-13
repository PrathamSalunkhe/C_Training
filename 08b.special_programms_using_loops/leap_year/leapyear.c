//this program is to find the year is leap year or not
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the year: \n");
    scanf("%d", &i);
    if(i%400==0)   //leap year must be exactly divisible by 400
    {
        printf("%d is a leap year\n",i);
    }
    else if(i%100==0)  //cantury year which is divisible by 100 is not a leap year
    {
        printf("%d is not a leap year\n", i);
    }
    else if(i%4==0)   //leap year must be exactly divisible by 4
    {
        printf("%d is a leap year\n", i);
    }
    else
    {
        printf("%d is not a leap year\n", i);
    }
    return 0;
}