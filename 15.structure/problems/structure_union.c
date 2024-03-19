//this program is for the sizes of structure and union

#include <stdio.h>
#pragma pack(1)

struct {
    double a;           //8 bytes
    union {
        char b[4];      //4 bytes
        double c;       //8 bytes
        int d;          //4 bytes
    }e;         //4=4<8=8 bytes                 
    char f[4];          //4 bytes
}s;                                 //8+8+4=20 bytes

union {
    double a;           //8 bytes
    struct {
        char b[4];      //4 bytes
        double c;       //8 bytes
        int d;          //4 bytes
    }e;         //16 bytes
    char f[4];          //4 bytes
}u;                                 //4<8<16 = 16 bytes

int main()
{                      //20 bytes  16 bytes
    printf("%ld %ld\n", sizeof(s), sizeof(u));
    return 0;
}