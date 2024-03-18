//This program is to understand the structure packing

#include <stdio.h>

//#pragma is a special purpose directive used to turn on and off certain features
#pragma pack(1)     //pack(1) means we are turning on the packing

struct abc
{
    char a; //1 byte
    int b;  //4 byte
    double c; //8 byte 
};

int main()
{
    struct abc s;
    printf("%ld", sizeof(s));   //here sizeof s is 13 bytes because of structure packing
    return 0;

    /*we can avoid the wastage of memory by structure packing
        but here cpu cycles will increased*/
}
