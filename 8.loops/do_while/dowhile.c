//example on do while loop

#include <stdio.h>

int main()
{
    int i;
    do
    {
        printf("enter an integer\n");   //first user will enter the integer
        scanf("%d", &i);                //if its other than 5 then enter again
    } while (i != 5);                   //cond will check after entering the int

    //if you enter5 then condition false, you came out of the loop 
    printf("you have entered 5, so you came out of the loop\n");
    return 0;
}