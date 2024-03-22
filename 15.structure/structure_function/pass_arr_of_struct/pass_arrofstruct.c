//this program is to understand hot to pass the array of structure to the function

#include <stdio.h>

struct point
{
    int x;
    int y;
};

int print(struct point arr[]);

int main()
{
    //arr[2] contains array to structure having 2 variables
    struct point arr[2] = {{2,5}, {4,9}};

    print(arr); //calling the function with passing the array of structure

    return 0;
}

/// @brief accpeting array of structure and printing the values of x and y
/// @param arr 
/// @return 0
int print(struct point arr[])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}