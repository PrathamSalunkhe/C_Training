// program is to find num is prime num or not

#include <stdio.h>
#include <math.h>    //include math lib

int main()
{
    int x;
    int i, val1, val2, count=0;
    printf("Enter a number\n");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));  //findthe sqrt of number
    val2 = x;          //store the num in another variable

    for(i=2;i<=val1;i++)
    {
        if(val2%i == 0)  //check whether the number is divide by numbers
            count=1;     //less than or equal to sqrt of that number
    }
    //if the number is divisible by any of the number then it is not a prime number
    if((count == 0 && val1!= 1)||val2 == 2||val2 == 3)
        printf("%d is a prime number\n", val2);
    else
        printf("%d is not a prime number\n", val2);
    return 0;
}