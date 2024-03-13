//problem based on conditional and loop

#include <stdio.h>
int main()
{
    int i = -5;
    while(i <= 5)  //if this copnd satisfies then i will go inside
    {
        if(i >= 0) //if i equals to 0 then itwill break the loop
            break;
        else       //if i>0 then it will go in else statement and i will increment
        {
            i++;     //as i will increment and continue the code
            continue;
        }
        printf("Neso\n");
    }
}