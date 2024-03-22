//this program is to pass the pointer of structure to the function

#include <stdio.h>

struct point
{
    int x;
    int y;
};

void print(struct point *);

int main()
{
    //here p1 is a variable of type struct point
    struct point p1 = {5, 8};   //variable accessing the values
    print(&p1);     //passing the address of structure variable

    return 0;
}

void print(struct point *ptr) //function accepts the pointer to structure variable
{
    printf("%d %d\n", ptr->x, ptr->y);  //pointer accessing the members
}