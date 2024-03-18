//this program is to understand the basics about union
/*union is auser defined data type but unlike structures,
    union members share same memory locations*/
#include <stdio.h>

union abc
{
    int a;  //4 bytes
    char b; //1 byte
}p;

int main()
{
    union abc p;
    p.a = 65;
    printf("a = %d\n", p.a);    //value of p.a = 65, so a = 65        ASCII of 65 is A
    printf("b = %c\n", p.b);    //as all members share same memory. so, p.b = 65, b = A, 

    printf("address of a = %d\n", &p.a);    //address of both a and b will be same
    printf("address of b = %d\n", &p.b);

    //size of the union is taken acc. to the size of the largest member of the union
    printf("size of union is: %ld\n", sizeof(p));   //largest member is int.
    return 0;                                       //so, size of union is 4 bytes
}