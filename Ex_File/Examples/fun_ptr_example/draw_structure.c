//this programis to perform some functions using function pointer and structure

#include <stdio.h>
#include <stdlib.h>

//declaring function pointers into the structure
typedef struct draw_structure
{
    int (*circle)();
    int (*square)();
    int (*rectangle)();
    int (*triangle)();
}DRAW_t;


//definations of all functions

int DRAW_CIRCLE()
{
    printf("Circle has been drawn successfully\n");
    return 0;
}

int DRAW_SQUARE()
{
    printf("Square has been drawn successfully\n");
    return 0;
}

int DRAW_RECTANGLE()
{
    printf("Rectangle has been drawn successfully\n");
    return 0;
}

int DRAW_TRIANGLE()
{
    printf("Triangle has been drawn successfully\n");
    return 0;    
}


int main()
{
    DRAW draw;
    int c;

    //ask user to enter the choice
    printf("Enter your choice: \n");
    printf("1.Draw circle\n");
    printf("2.Draw square\n");
    printf("3.Draw rectangle\n");
    printf("4.Draw triangle\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        draw.circle = DRAW_CIRCLE;  //assigning function to function pointer
        draw.circle();              //calling function
        break;
    
    case 2:
        draw.square = DRAW_SQUARE;  //assigning function to function pointer
        draw.square();              //calling function
        break;

    case 3:
        draw.rectangle = DRAW_RECTANGLE;    //assigning function to function pointer
        draw.rectangle();                   //calling function
        break;

    case 4:
        draw.triangle = DRAW_TRIANGLE;  //assigning function to function pointer
        draw.triangle();                //calling function
        break;

    default:
        printf("Invalid choice\n");
        exit(1);
    }
}