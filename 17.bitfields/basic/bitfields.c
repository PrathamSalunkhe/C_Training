//this program is to understand the bitfields

#include <stdio.h>

struct bitfields
{
    unsigned char f1: 1,
                 res1: 1,
                 f2: 2,
                 res2: 1,
                 f3: 3;
}b;

int main()
{
    printf("%ld\n", sizeof(b));
    b.f1 = 1;
    b.f2 = 3;
    b.f3 = 3;
    printf("%d %d %d\n", b.f1,b.f2,b.f3);
    return 0;
}