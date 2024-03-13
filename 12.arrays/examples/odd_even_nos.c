//this program is to find the odd and even numbers in an array

#include <stdio.h>

int main()
{
    int a[10]={2,45,33,7,8,12,89,36,90,18};
    int i,odd=0,even=0;

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("the even numbers in an array are: %d\n", even);
    printf("The odd numbers in an array are: %d\n", odd);
    return 0;
}