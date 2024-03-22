//find the area of rectangle using structure and function
//passing the structure variable as argument

#include <stdio.h>

struct rectangle
{
    float length, breadth;
    double area;
};

//declaring a function of area
double area(struct rectangle);   


int main()
{
    struct rectangle r;
    //ask user to enter the length and breadth
    printf("Enter the length of rectangle: \n");
    scanf("%f", &r.length);
    printf("Enter the breadth of rectangle: \n");
    scanf("%f", &r.breadth);

    printf("Area of rectangle is: %lf\n",area(r));  //call the function
    return 0;
}

/// @brief accepting the structure and performing operation
/// @param r 
/// @return area of type double
double area(struct rectangle r)
{
    r.area = (double)(r.length * r.breadth);
    return r.area;
}