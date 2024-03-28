//this program is to find the greater number using command line argumemnts

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b;

    if(argc < 2 || argc > 3)    //argument must be only 3 
    {
        printf("enter only 3 arguments\n");
        return 0;
    }

    //change the datatype of the arguments using atoi() function
    //atoi() function converts string data type into integer data type
    a = atoi(argv[1]);  
    b = atoi(argv[2]);

    if(a < 0 || b < 0)  //number should positive integer only
    {
        printf("please enter positive number only\n");
        return 1;
    }

    if(a > b)   //condition for the arguments
    {
        printf("%d is greater\n", a);
    }
    else
    {
        printf("%d is greater\n", b);
    }
    return 0;
}