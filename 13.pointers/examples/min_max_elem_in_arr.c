//this program is to print the minimum and maximum element in an array using pointers

#include <stdio.h>


int MinMax(int b[],int,int *,int *);   //function declaration



int main()
{
    int a[]={4,34,5,24,25,63,69,23,55,31,65,45,88,33,25};
    int len=sizeof(a)/sizeof(a[0]);
    int max, min;

    //function calling
    //addresses of max and min passed to function
    //whole array is passed to function
    //length is passed to function
    MinMax(a,len,&max,&min); 

    printf("The maximum element in array is: %d\n", max);
    printf("The minimum element in array is: %d\n", min);
}



/*/ @brief it will sort the minimum and maximum element of an array
/// @param a 
/// @param len 
/// @param max 
/// @param min 
here we have receiving the array as an argument to the function
*/
int MinMax(int a[],int len,int *max,int *min)  //function defination
{
    *max = *min = a[0];
    int i;
    for(i=0;i<len;i++)
    {
        if(a[i]>*max)
        {
            *max = a[i];
        }
        if(a[i]<*min)
        {
            *min = a[i];
        }
    }
}