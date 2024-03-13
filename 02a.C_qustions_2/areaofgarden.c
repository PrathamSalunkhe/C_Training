//program to find the area of garden

#include <stdio.h>
int main()
{
    float a,b,c;

    //enter the length
    printf("Enter the length of garden\n");
    scanf("%f", &a);

    //enter the breadth
    printf("Enter the breadth of garden\n");
    scanf("%f", &b);

    //formula of area of garden is length * breadth
    c = a * b;

    printf("The area is: %.2f\n", c);
    return 0;
}