//this program is to find the no. of elements in an array

#include <stdio.h>
#include <string.h>

int main()
{
    char b[]= {'a','b','c','d','e','f','g','h','i','k','l'/*,'m','n','o','p'*/};
    char c[]= {"HelloWorld"};
    /*int a[]={1,23,3,4,52,14,2,78,344,64,36,3,2,412,363,6,23,
                42,4,34,4,5,6,6,2,5,78,8,5,6,74,4,56};*/
    int a[5] = {1,2,3,4,5};
    
    // printf("there are %ld elements in this array\n", sizeof(a)/sizeof(a[0]));
    // printf("sizeof b is: %lu\n", sizeof(b));
    // printf("Sizeof c is: %lu\n", sizeof(c));
    // printf("Length of b is: %lu\n", strlen(b));

    printf("%d", a[6]);
}