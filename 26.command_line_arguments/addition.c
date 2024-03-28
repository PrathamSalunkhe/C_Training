//this program is to perform addition of two numbers using cmd line arg

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a,b, c;

    if(argc < 3 || argc > 4)    //arguments must be 3 only
    {
        printf("Enter only 3 arguments\n");
        return 0;
    }

    //change the datatype of the arguments using atoi() function
    //atoi() function converts string data type into integer data type
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    c = a + b;  //operation of addition

    printf("The addition is: %d\n", c);
    return 0;
}