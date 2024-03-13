//this program is to add the integer to the pointer

#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,*p;
    p = &a[0];  //initially p points to address of a[o]
    printf("%d %d\n", p, *p);

    p = p + 3;    //then we add integer 3 to the p 

    //then the p will sotre the address of a[3]
    //*p will contain the value of the address it points to
    printf("%d %d\n", p, *p);    //so, *p = 4   as p = &a[3].

    
}