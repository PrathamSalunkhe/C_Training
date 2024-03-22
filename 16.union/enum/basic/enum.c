//this program is to understand the enums in c

#include <stdio.h>

enum Bool {False, True};    //false and true are the names to integral constants
//if we do not assign values to the enum names,
//then compiler will automatically assign the values to the names starting from 0.
//so, false=0, True=1

int main()
{
    enum Bool var;  //var is a variable of type enum Bool
    var = True;  //assigning the value(name contains value of integral constant) to the variable

    printf("%d\n", var);
    return 0;
}