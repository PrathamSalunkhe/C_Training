//this program is for basics of function pointer

#include <stdio.h>

int print()
{
    printf("the function has been successfully called\n");
    return 0;
}

int main()
{
    int (*fptr)(); //function pointer declaration
    fptr = print;  //function assign

    fptr(); //called


}