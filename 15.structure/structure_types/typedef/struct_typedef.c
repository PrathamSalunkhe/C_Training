//this program is to pass the structure to the function and perform operations in function
//with return the structure of updated values

#include <stdio.h>

typedef struct abc{
    int x;
    int y;
}abc;

//declared the function 
void edit2(abc *);
abc edit1(abc);

int main()
{
    abc a1;
    a1.x = 45;
    a1.y = 89;
    //this will print the initial values of structure members
    printf("The value of x is: %d\n", a1.x);
    printf("The value of y is: %d\n", a1.y);

    a1 = edit1(a1);      //calling the function by passing structure

    printf("After function calling for first time\n");
    printf("The value of x is: %d\n", a1.x);
    printf("The value of y is: %d\n", a1.y);

    edit2(&a1);

    printf("After function calling for second time\n");
    printf("The value of x is: %d\n", a1.x);
    printf("The value of y is: %d\n", a1.y);
    return 0;
}

/// @brief function accepting structure and performing operation with the members of structure
/// @param p 
/// @return structure
abc edit1(abc p)
{
    p.x = 23;
    p.y = 77;
    return p;
}

/// @brief function accepting address of structure and performing operation with the members of structure
/// @param p 
/// @return the pointer to the member of structure
void edit2(abc *p)
{
    p->x = 34;
    p->y = 67;
}