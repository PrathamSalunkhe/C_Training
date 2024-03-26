//The strerror() function is used to show the error description.
//This function returns a pointer to the textual representation of the current errno value.

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fptr;

    fptr = fopen("cprogramming.txt", "r");

    printf("Value of errno: %d\n", errno); 
    printf("The error message is : %s\n", strerror(errno));

    return 0;
}