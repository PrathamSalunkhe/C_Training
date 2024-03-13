//program to print all odd numbers from 1 to 20

#include <stdio.h>
int main()
{
    int i, n=2;
    for(i=1;i<=20;i++)
    {
        if(i == n)  //if this cond false odd num will printed
        {
            n = n+2;  //if above is true then comes here
            continue;    //this will stores value in n and continue the loop
        
        }
        printf("%d\n", i);
    }
}