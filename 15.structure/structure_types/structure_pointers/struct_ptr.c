//this program is to understand structure pointer
//pointers pointing to a structure variables
#include <stdio.h>

struct abc{
    int x;
    int y;
};

int main()
{
    //variable 'a' of type struct abc, accessing the members of structure
    struct abc a = {0,1};   
    //ptr is a pointer to some variable of type stuct abc. 
    //it contains the address of a which is a variable of type struct abc 
    struct abc *ptr = &a;   

    //ptr->x is equivalent to (*ptr).x = (*&a).x = (a).x = 0 
    //ptr->y is equivalent to (*ptr).y = (*&a).y = (a).y = 1
    printf("%d %d\n", ptr->x, ptr->y);  //output will be 0 an 1
    return 0;
}