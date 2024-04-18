//this program is to understand union

#include<stdio.h>

int main()
{
    union sf_un
    {
        short val;
        char ch;
    };
    
    union sf_un u;

    u.val = 257;
    u.ch = 1;

    printf("val: %d\n", u.val);
    printf("ch: %d\n", u.ch);

    return 0;
}