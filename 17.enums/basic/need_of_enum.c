//this program is to understand the need of enum

/*1. enum can be declared in local scope.
  2. enum names are automatically initialized by the compiler.*/

#include <stdio.h>

int main()
{
    //as, we have not initialized the enum names.
    //so, compiler will automatically initialized the enum names
    //therefor, false=0, true=1
    enum Bool {False, True} var;    //here, this enum is not visible outside this main function 
    var = True; 

    printf("%d\n", var);

    return 0;
}