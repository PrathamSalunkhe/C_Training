//this program is to print the 3d array using array name as a pointer
//name of the array represents the pointer

#include <stdio.h>
int main()
{
    int a[2][2][2]={1,2,3,4,5,6,7,8}; //{ { {1,2},{3,4} }, { {5,6},{7,8} } };

    printf("a[0][0][0]= %d \t", ***a);   
    printf("a[0][0][1]= %d \n", ***a+1); 
    //printf("\n");
    printf("a[0][1][0]= %d \t", ***a+1+1);  
    printf("a[0][1][1]= %d \n", *(**a+1+2));
    printf("\n");
    printf("a[1][0][0]= %d \t", **(*(a+1)));
    printf("a[1][0][1]= %d \n", ***(a+1)+1);
    //printf("\n");
    printf("a[1][1][0]= %d \t", **(*(a+1)+1));
    printf("a[1][1][1]= %d \n", **(*(a+1)+1)+1);
    printf("\n");
}