//what will be the output of the program

#include <stdio.h>
int main()
{
    int i;

    for(i=0;i<20;i++)
    {                 //i will go inside the for loop and inside the switch stat.
        switch (i)
        {
        case 0: i += 5;  //here no break statement is written
        case 1: i += 2;  //so first case will evaluated till end 
        case 5: i += 5;  //including default 
        default: i += 4; //after 1st case i will be i=16 after increment i++ i=17 
        }
        printf("%d\n", i);  
    }
}