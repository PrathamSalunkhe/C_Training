//howmany times hello world will be printed

#include <stdio.h>
int main()
{
    int i = 1024;    //initialize
       //cond inc/dec 
    for(; i; i >>= 1)
    {
        printf("Hello World\n");
    }
    return 0;
}