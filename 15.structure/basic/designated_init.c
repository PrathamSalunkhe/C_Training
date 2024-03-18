//this program is to understand designated initialization

#include <stdio.h>

struct abc
{
    int x;
    int y;
    int z;
};

int main()
{
    //here we are initializing the structure members designatedly
    //order doesn't matter but, you have to used dot(.) operator before initialize
    //a access all the members of the structure
    struct abc a = {.y = 20, .x = 10, .z = 30};

    printf("%d %d %d\n", a.x, a.y, a.z);
    return 0;
}