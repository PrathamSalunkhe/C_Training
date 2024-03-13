//switch example

#include <stdio.h>

int main()
{
    int x = 36;
    switch (x)
    {
    case 3+30: printf("choice 1\n");
        break;
    case 35+10: printf("choice 2\n");
        break;
    case 6*6: printf("choice 3\n");
        break;
    default:printf("default\n");
        break;
    }
}