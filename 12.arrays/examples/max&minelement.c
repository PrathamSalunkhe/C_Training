//this program is to find the maximum and minimum element in an array

#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,max,min;

    //initialize a[0] by max and min
    max = a[0];   
    min = a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)          //if any element is greater than the initialize element 
        {                     //then it will be a max element  
            max = a[i];
        }

        if(a[i]<min)       //if any element is lesser than the initialize element
        {                  //then it will be a min element  
            min = a[i];
        }
    }

    //print the max & min element
    printf("The maximum element of an array is: %d\n", max);
    printf("The minimum element of an array is: %d\n", min);
    return 0;
}