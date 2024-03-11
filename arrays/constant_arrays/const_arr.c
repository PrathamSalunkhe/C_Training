//this program is to uinderastand constant arrays in 

#include <stdio.h>

int main()
{
    int i;
    const int a[10]={1,2,3,4,5,6,7,8,9,10};

    //putting const keyword infront of an array makes an constant array
    //you cannot modify that array

    a[5]=1020;   //so, this operation can't be performed on the array

    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}