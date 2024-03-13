//this program is to stored the elements of one array into another array 
//by using pointer

#include <stdio.h>
int main()
{
    int i,j;
    char a[2][3] = {{'a','b','c'},{'d','e','f'}};
    char b[3][2];
    char *p = *b;     //*p represents the arr b[3][2]

    for(i=0;i<2;i++)  //rows of a[2][3]
    {
        for(j=0;j<3;j++)  //columns of a[2][3]
        {
            *(p + 2*j + i) = a[i][j];   //by this operation elements are sotred in 
        }                               //b[i][j] at respective position acc. to value
    }

    for(i=0;i<3;i++)  //rows of b[3][2]
    {
        for(j=0;j<2;j++)  //columns of b[3][2]
        {
            printf("%c ", b[i][j]);
        }
        printf("\n");
    }
}