//this program is for arithmatic operation using macros 


#include <stdio.h>
#define add(x, y) x+y      //macros defined

int main()
{

    //macros called below,  first it will get expanded and after that it will evaluated
    //so, 5 * 7 + 8 = 35 + 8 = 43
    //as, * operator has higher precision than + operator. first multiplication then addition 
    printf("The result of expression a * b + c is : %d", 5 * add(7, 8));   
    return 0;   
}