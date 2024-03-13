//add two numbers without using + operator
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    if(y > 0)   //if y>0 then increment x and decrement y
    {
        while(y!=0)
        {
            x++;
            y--;
        }
    }
    else if(y < 0)   //if y<0 then increment y and decrement x
    {
        while(y!=0)
        {
            x--;
            y++;
        }
    }

    printf("The addition of two numbers is: %d\n", x);
    return 0;
}