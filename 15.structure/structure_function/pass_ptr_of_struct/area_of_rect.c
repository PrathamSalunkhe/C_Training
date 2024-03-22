//this program is to pass the pointer of structure to the function

#include <stdio.h>

struct rectangle
{
    float length, breadth;
    double area;
};

//declaring a function of area
double area(struct rectangle *);   


int main()
{
    struct rectangle r;
    //ask user to enter the length and breadth
    printf("Enter the length of rectangle: \n");
    scanf("%f", &r.length);
    printf("Enter the breadth of rectangle: \n");
    scanf("%f", &r.breadth);

    //.......passing the address of a structure variable
    printf("Area of rectangle is: %.3lf\n",area(&r));  //call the function
    return 0;
}


/// @brief accepting the pointer to structure and performing operation
/// @param ptr 
/// @return pointer to area of type double
double area(struct rectangle *ptr)
{
    ptr->area = (double)(ptr->length * ptr->breadth);
    return ptr->area;
}