//this program is to subtract the two pointers

#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p,*q,d;

    p=&a[3];  //p will contain the address of a[3]
    printf("%d %d\n", p, *p);

    q=&a[8];  //q will contain the address of a[8]
    printf("%d %d\n", q, *q);

    //in this, q(&a[8]) - p(&a[3]) = d
    /*whenever we are subtracting two pointers, we cannot simply subtract their addresses.
      we must have to divide them by the number of bytes...
      in integer array, we must divide it by the number of bytes an integer will take.
      in character array, we must divide it by the number of bytes an character will take.
      here int, array is taken so, (1220347072 - 1220347052)/4 = 5 it is the value */
    d = q - p;    
           
    printf("%d - %d = %d\n", q,p,d);
}