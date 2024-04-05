//this program is for sorting of array using selection sort

#include <stdio.h>
int main()
{
    int a[5]={3,5,2,8,1};
    int i,j,p;

    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[j]<a[i])        //if element of j is lesser than i, 
            {                    //then put element of i in another variable called p
                p=a[i];          //exchange the values of j to the i
                a[i]=a[j];       //then put that lesser value in the j
                a[j]=p;   
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}