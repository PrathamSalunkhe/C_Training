//calculate the area of rectangle using upper left and lower right co-ordinates


#include <stdio.h>

struct point
{               //co-ordinates
    int x;  //co-ordinate 1
    int y;  //co-ordinate 2
};

struct rectangle    //it contains 2 members of type struct point
{                               
    struct point upper_left;
    struct point lower_right;
};

int area(struct rectangle r)
{
    int length, breadth;

    //we can find the length of rectangle by subtracting lower right x and upper left x
    //because lower right x(greater) is on ending node horizontally and
    //upper left x(smaller) is on starting node
    length = r.lower_right.x - r.upper_left.x;  

    //we can find the breadth of rectangle by subtracting upper left y and lower right y
    //because upper left y(greater) is on starting node vertically and
    //lower right y(smaller) is on ending node
    breadth = r.upper_left.y - r.lower_right.y;

    return length*breadth;
}

int main()
{
    struct rectangle r;
    //these are the upperleft co-ordinates of rectangle
    printf("Enter the upperleft co-ordinates of the rectangle: \n");
    scanf("%d %d", &r.upper_left.x, &r.upper_left.y);

    //these are thee lowerright co-ordinates of rectangle
    printf("Enter the lowerright co-ordinates of the rectangle: \n");
    scanf("%d %d", &r.lower_right.x, &r.lower_right.y);

    //call the function area and pass the structure as an argument
    printf("Area of rectangle is: %d\n", area(r));
    return 0;
}