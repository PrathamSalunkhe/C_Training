//comma operator evaluation

#include <stdio.h>

int main()
{
    //comma operator returns the rightmost operand and evaluate the rest of operand
    //here it will evaluate first printf statement after that it will print the var
    int var = (printf("%s\n", "HELLO!"), 5);
    printf("%d\n", var);
    return 0;
}