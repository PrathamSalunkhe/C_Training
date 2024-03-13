//this program is to understand the void pointer

#include <stdio.h>

int main()
{
    int n = 10;
    void *ptr = &n;  //void pointer has no associated data type with it
    //it can point to any type of data
    printf("%d", *(int*)ptr); // o/p will be 10       //to dereference the void pointer,
    return 0;                                      //we have to typecast it first
}  