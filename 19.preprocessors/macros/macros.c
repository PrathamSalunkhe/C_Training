//this program is to understand the preprocessor directive -> macros

#include <stdio.h>  //this is also a preprocessor directive, 
//it is used to include file. 

#define PI 3.14 //macro defined

int main()
{
    int r;
    float area;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    area = PI * r * r;  //macro expanded
    printf("The area of circle is: %f\n", area);

    return 0;
}