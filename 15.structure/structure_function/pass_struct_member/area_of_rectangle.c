//find the area of rectangle using structure and function
//passing the structure members as arguments

#include <stdio.h>

struct rectangle
{                               //structure members
    float length, breadth;
};

void area(float a, float b)     //receive the length and breadth
{
    double area;
    area = (double)(a*b);   //a and b receives the values and operates
    printf("Length is: %f\n breadth is: %f\n", a,b);
    printf("The area of rectangle is: %lf\n", area);
}

int main()
{
    struct rectangle r;
    //ask user to enter the length and breadth
    printf("Enter the length of rectangle: \n");
    scanf("%f", &r.length);
    printf("Enter the breadth of rectangle: \n");
    scanf("%f", &r.breadth);

    //pass the length and breadth as an arguments
    area(r.length,r.breadth);
    
    return 0;
}