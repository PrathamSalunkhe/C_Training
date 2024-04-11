//find the area of rectangle using structure and function
//passing the structure members as arguments

#include <stdio.h>

struct rectangle
{                               //structure members
    float length, breadth;
};


double area(float, float);

int main()
{
    struct rectangle r;
    double Area;
    //ask user to enter the length and breadth
    printf("Enter the length of rectangle: \n");
    scanf("%f", &r.length);
    printf("Enter the breadth of rectangle: \n");
    scanf("%f", &r.breadth);

    //pass the length and breadth as an arguments 
    Area = area(r.length,r.breadth);    //call the function

    //here, "Area" will store the returned value of the function 
    printf("The area of rectangle is: %lf\n", Area);
    return 0;
}

/// @brief this function calculates the area of the the rectangle 
/// @param a 
/// @param b 
/// @return area
double area(float a, float b)     //receive the length and breadth
{
    double area;
    area = (double)(a*b);   //a and b receives the values and operates
    printf("Length is: %f\t breadth is: %f\n", a,b);
    // printf("The area of rectangle is: %lf\n", area);
    return area;
}