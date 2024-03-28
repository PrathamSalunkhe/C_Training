//this program is perform arithmetic operations using command line arguments

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,c, p,q,r;
    double s;

    if(argc < 4 || argc > 5)
    {
        printf("Please enter a only 4 arguments\n");
        return 0;
    }

    //change the datatype of the arguments using atoi() function
    //atoi() function converts string data type into integer data type
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);  //this arg is for the choice of operation

    /*the fourth argument should be from numbers 1 to 4 only
    1 for add, 2 for subtract, 3 for divide, 4 for multiply*/
    switch (c)
    {
    case 1:
        printf("You entered argument %d, is for addtion\n", c);
        p = a+b;
        printf("The result is: %d + %d = %d\n", a,b,p);
        break;
    case 2:
        printf("You entered argument %d, is for subtraction\n", c);
        q = a-b;
        printf("The result is: %d - %d = %d\n", a,b,q);
        break;
    case 3:
        printf("You entered argument %d, is for multiplication\n", c);
        r = a*b;
        printf("The result is: %d * %d = %d\n", a,b,r);
        break;
    case 4:
        printf("You entered argument %d, is for division\n", c);
        s = (double)a/b;
        printf("The result is: %d / %d = %.3f\n", a,b,s);
        break;
    default:
        printf("Inavlid Argument\n");
        break;
    }
    return 0;
}