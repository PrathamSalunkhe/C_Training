//short ckt in and operator
//if condition anywhere in exp. returns false
//then the other cond.n will not evaluated 

#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int incr;
    
    //first condn is false so next condn will not eveluated
    incr = (a == b) && (b++);
    printf("%d\n", incr);
    printf("%d\n", b);
    return 0;
}
