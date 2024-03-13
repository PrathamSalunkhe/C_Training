//this program is to print the value of operation done by function

#include <stdio.h>

int f(int x,int *py, int **ppz)
{   //x=c, *py=b=&c, **ppz=a=&b

    int y,z;
    **ppz += 1;  //**ppz = 4 + 1 = 5
    z = **ppz;   //z = 5
    *py += 2;    //*py = 5 + 2 = 7
    y = *py;     //y = 7
    x += 3;      //x = 4 + 3 = 7
    return x+y+z;   //x+y+z = 7+7+5 = 15    // o/p will be return to the callee
}
void main()
{
    int c, *b, **a;
    c=4, b=&c, a=&b;
    printf("%d", f(c,b,a));  //function called 
}    // o/p will print here 
