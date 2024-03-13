//problem on operators

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    //here shrt. ckt. for or required  
    int c = ++a || b++ ;  //for this exp. a=2 b=1
    int d = b-- && --a ;  //for this exp. b=0 a=1

    printf("%d %d %d %d", d,c,b,a);   //d=1, c-1, b=0, a=1
    return 0;
}