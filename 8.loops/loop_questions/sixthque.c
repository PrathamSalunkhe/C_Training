#include <stdio.h>
int main()
{
    int x = 3;
    //here if cond is false
    //after that x will be init bt 0
    //now x=0 another conf of if is also false bec. 
    //0 not equal to 3 so else will be work x =x+2 0+2 = 2
    if(x == 2); x = 0;
    if(x == 3) x++;
    else x += 2;     //x=2

    printf("x = %d", x);
    return 0;
}