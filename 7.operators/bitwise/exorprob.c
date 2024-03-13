//problem on xor operator

#include <stdio.h>

int main()
{
    //4 = 0100 & 3 = 0011
    int a = 4, b = 3;
    a = a ^ b;        //0100|0011 = 0111 = a=7  
    b = a ^ b;        //0111|0011 = 0100 = b=4
    a = a ^ b;        //0111|0100 = 0011 = a=3

    //after xor a=3 & b=4
    printf("After XOR, a = %d and b = %d\n", a,b);
    return 0;
}