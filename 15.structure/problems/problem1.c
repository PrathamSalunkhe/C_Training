//this program is to find the o/p

#include <stdio.h>

struct problem
{
    int x,y,z;
};

int main()
{
    struct problem p1 = {.y = 0, .z = 1, .x = 2};   //values of x,y,z are assigned to variable

    printf("%d %d %d\n", p1.x, p1.y, p1.z); //values are accessed
    return 0;
}