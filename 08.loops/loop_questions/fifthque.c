//what will be output of this code

#include <stdio.h>
int main()
{
    unsigned int i = 500;  //range of unsigned int is 0 to 4294967295 
    while(i++ != 0);      //as range will exceeded i comes to 0 then cond will false
    printf("%d", i);     //and we came out of the loop will be printed, i++ = i=1
    return 0;
}