//program is to check whether num is armstronh or not

#include <stdio.h>
int main()
{
    int number, count=0, mul=1, result=0, cnt, rem;
    printf("Enter the number\n");
    scanf("%d", &number);
    int q=number;

    //find out the b\no. digits in number
    while (q != 0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    //multiply each digit by (n)times, and add them
    while(q!=0)
    {
        rem = q%10;    //stored the rem
        while (cnt!=0)
        {
            mul =mul * rem;  //multiply the reminder
            cnt--;    //decr the count
        }
        result = result + mul;   //add that number
        cnt =count;
        q=q/10;
        mul=1;
    }

    //compare the result with original number
    if(result == number)
    {
        printf("%d is an Armstrong number\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number\n", number);
    }
    return 0;
}