//basic code for printing of float value

#include <stdio.h>

int main()
{
    float a,b,c;
    // take value from the user
    printf("Enter the characters");
    scanf("%f%f", &a, &b);

    //operate them
    c = a-b;
    printf("\nThe value is : %f", c);
    return 0;
}