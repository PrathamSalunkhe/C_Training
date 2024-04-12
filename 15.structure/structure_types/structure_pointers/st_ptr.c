//this program is to for structure pointer

#include <stdio.h>

typedef struct point
{
    int x;
    char data[20];
}value;

int main()
{
    value val = {25, "Hello"};

    value *ptr;
    ptr = &val;

    printf("%d %s\n", ptr->x, ptr->data);
    
}