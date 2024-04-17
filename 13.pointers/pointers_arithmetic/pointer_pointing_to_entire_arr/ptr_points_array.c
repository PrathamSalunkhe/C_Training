//pointer pointing to entire array

#include <stdio.h>
int main()
{
    int a[][3]= {1,2,3,4,5,6};
    int (*p)[3]= a;   //here, pointer is pointing to first 1d array

    //printf("%d\n", *p[0]);

    //printf("%d %d\n", (*p)[1], (*p)[2]);
    printf("%d %d %d\n", (*p)[0], (*p)[1], (*p)[2]); 

    p++;       //p+1, so pointer will point to 2nd 1d array

    //printf("%d %d\n", (*p)[1], (*p)[2]);
    printf("%d %d %d\n", (*p)[0], (*p)[1], (*p)[2]); 
    return 0;

}