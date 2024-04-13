//This program is to understand the structure padding

#include <stdio.h>

struct abc
{
    int a; //4 byte
    char b;  //1 byte
    float c; //4 byte    
};

int main()
{
    struct abc s;
    printf("%ld", sizeof(s));   //here sizeof s is 12 bytes because of structure padding
    //6 bytes are padded bytes
    return 0;

    /*because of structure padding, size of the structure becomes more than the actual
     size of the structure. Due to this, some memory will get wasted
     but cpu cycles will be reduced*/
}