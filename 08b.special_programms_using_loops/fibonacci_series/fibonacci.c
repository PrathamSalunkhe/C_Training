//this program is to find the fibonacci series
#include <stdio.h>
int main()
{
    int i,result,n, a=0, b=1;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ", a);  //initially a=0, b=1  0 wil be print 
        result = a + b;   //add of 0+1= 1 stored in result
        a = b;           //b will be stored in a
        b = result;     //result will be stored in b
    }
    printf("\n");
    return 0;
}