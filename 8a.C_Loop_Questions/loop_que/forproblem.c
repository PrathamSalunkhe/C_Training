// this program is to find the sum of all numbers from 1 to 100 

#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        //initially s=0, then one by one all the digits will be add together
        sum = sum + i;  
    }
    printf("sum of all digits from 1 to 100 is: %d\n", sum);
    return 0;
}