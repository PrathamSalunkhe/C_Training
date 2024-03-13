//what will be the output of following code

#include <stdio.h>
int main()
{
    int i = 0;
    //here i is already init. so one will be printed
    //0<3 && 0 = 0 where printf return the no. of char printed
    //so the && cind will false loop will not be evaluated
    //only one will be printed
    for(printf("one\n"); i<3 && printf(""); i++)
    {
        printf("Hi\n");
    }
    return 0;
}