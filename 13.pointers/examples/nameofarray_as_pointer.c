#include <stdio.h>
int main()
{
    /*int a[]={11,22,36,5,2};
    int *p = a;
    printf("%d ", *p);
    printf("%d \n", *(++p));
    return 0;*/

    int a[]={11,22,36,57,28};
    /*printf("%d  %d\n", *a,     a);      //a[o]
    printf("%d  %d\n", *(a+1), a+1);    //a[1]
    printf("%d  %d\n", *(a+2), a+2);    //a[2]
    printf("%d  %d\n", *(a+3), a+3);    //a[3]
    printf("%d  %d\n", *(a+4), a+4);    //a[4]
    return 0;*/

    for(int i=0;i<5;i++)
    {
        printf("%d \n", *(a+i));
    }
    return 0;
}