//example of function

#include <stdio.h>
int areaofrectangle(int, int);    //function declaration

int main()
{
    int a=30, b=16;
                        //actual parameters
    int area = areaofrectangle(a,b);  //function calling
    printf("%d\n", area);
}

                        //formal parameters
int areaofrectangle(int length, int breadth)  //function defined
{
    int area;
    area = length * breadth;   //computation
    return area;
}

