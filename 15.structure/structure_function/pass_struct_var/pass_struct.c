//find the area of rectangle using structure and function
//passing the structure variable as argument

#include <stdio.h>

struct point
{
    int x;
    int y;
};

void print(struct point);

int main()
{
    //here p1 is a variable of type struct point
    struct point p1 = {5, 8};   //variable accessing the values
    print(p1);

    return 0;
}

void print(struct point p1) //function accepts the structure variable
{
    printf("%d %d\n", p1.x, p1.y);  //variable accessing the members
}