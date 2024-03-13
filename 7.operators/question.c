//question based on precende and associativity of operator  

#include <stdio.h>

int main()
{
    //precedence of <= and > is greater than among these
    //associativity comes in picture (left to right)

    int a=10, b=20, c=30, d=40;
    //(10 <= 20 =TRUE(1)) (40 > 30 = TRUE(1))
    if(a <= b == d > c)         //after == comes -> TRUE == TRUE = 1==1 TRUE
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}