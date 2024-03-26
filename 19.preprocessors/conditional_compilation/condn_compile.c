//this program is to understand the conditional compilation preprocessor directive

#include <stdio.h>

#define MAX_NUM 20      //defined macro

int main()
{   //code to be executed if the macro(MAX_NUM) is defined
    #ifdef MAX_NUM  
        printf("The maximum number is defined: %d\n", MAX_NUM);
    #endif  //it is used to closed the #ifdef

    //code to be executed if the macro(SQUARE) is not defined
    #ifndef SQUARE
        printf("THe square is not defined\n");
    #endif  //it is used to closed the #ifndef
}
