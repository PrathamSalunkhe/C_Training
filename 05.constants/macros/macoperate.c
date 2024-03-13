//this program is for arithmatic operation using macros 


#include <stdio.h>
#define add(x, y) x+y      //macros defined

int main()
{

    //macros called below,  first it will get expanded and after that it will evaluated
    printf("The result of expression a * b + c is : %d", 5 * add(7, 8));   
    return 0;
}