//this program is to understand the wild pointer

#include <stdio.h>
int main()
{
    int *p;  //wild pointers are uninitialized pointers
    *p = 10;    //segmentation fault
    return 0;
}