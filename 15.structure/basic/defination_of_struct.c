//this program is to understand the basic about structures
//declaring of the structure
#include <stdio.h>

struct {
    char *engine;       //structure declaration 
}car1,car2;

//this above structure is decleared in global scope

int main()
{
    //with the help of dot(.) operator we can access the memeber of the structure
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L kapa Dual VTVT";

    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);

    return 0;
}