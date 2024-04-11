//this program is to return pointer to the structure from the function

#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

/// @brief this function receives the structure members as an arguments
            //and returns the pointer to that structure
struct point *fun(int a, int b)
{
    //create ptr and allocate memory to it using malloc function
    struct point *ptr = (struct point*)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b + 5;
    return ptr;
}
int main()
{
    //ptr1 and ptr2 are 2 pointers which receives the address 
    //of the structure returned from function 
    struct point *ptr1, *ptr2;
    ptr1 = fun(2,7);
    ptr2 = fun(6,9);
    
    printf("ptr1 = %d %d\n", ptr1->x, ptr1->y);
    printf("ptr2 = %d %d\n", ptr2->x, ptr2->y);

    //release the memory from the ptr
    free(ptr1);
    free(ptr2);

    return 0;
}