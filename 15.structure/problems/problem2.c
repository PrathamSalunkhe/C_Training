//this program is to find the o/p

#include <stdio.h>

struct node
{
    char x,y,z;
};

int main()
{
    //here, ascii vlue of 'a' is 97 and 97+2 = 99,
    //character equivalent of 99 is 'c' 
    struct node p = {'1', '0', 'a'+2}; //so, 'a'+2 = 'c'
    //so,.......p = {'1', '0', 'c'};
    struct node *q = &p;    //q contains the address of the whole sturcture

    //now q is a pointer to a character. because of typecasting, it is pointing to character
    //typecasting is most imp. without typecasting, q is pointing to a structure
    printf("%c %c\n", *((char*)q+1), *((char*)q+2));

    return 0;
}