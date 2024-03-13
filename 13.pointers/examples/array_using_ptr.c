//this program is to print the array using pointer

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements to store in an array: ");
    scanf("%d", &n);   //ask the user to enter the length of an array

    int a[n];
    int i,j,x;
    printf("Enter the %d elements in an array\n", n); 
    for(i=0;i<n;i++)    //enter the elements of an array
    {
        printf("\nvalue of n is: %d\n",n);
        printf("enter element %d: ", i);  //add elements forward
        scanf("%d", (a+i));   //use pointer arithmetic-addition, 
    }                     //init. p points to a[i]= a[0], then i increments

    printf("The elements in array are: \n");
    for(i=0;i<n;i++)       //print the array
    {
        printf("%d ", *(a+i)); //pointer addition, init. p points to a[i]= a[0], then i increments
    }

    printf("\nThe reverse array is: \n");  //reverse of the array 
    for(i=n-1;i>=0;i--)
    {
        printf("%d ", *(a+i));
    }

    //sorting of array 
    printf("\nAscending order of array is: \n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if((*(a+j))<(*(a+i)))
            {
                x = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = x;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    return 0;
    
}