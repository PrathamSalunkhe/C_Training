//problem based on function

#include <stdio.h>

int fun()   //function defined
{
    static int num = 16;  //variable declared static
    return num--;     //value return and then decrement as it is post decrement
}

int main()
{
    for(fun();fun();fun())      //function calling init fun()=16
        printf("%d ", fun());   //then it will decrement whenever called
    return 0;                   //O/P:- 14,11,8,5,2.
}