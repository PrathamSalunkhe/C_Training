//variable expressions are not allowed in case labels
//macros are allowed

#include <stdio.h>
#define y 2
#define z 23

int main()
{
    int x = 2;
    switch (x)
    {
    case y: printf("Number is 2");
        break;
    case z: printf("Number is 23");
        break;
    
    default: printf("default case");
        break;
    }
}