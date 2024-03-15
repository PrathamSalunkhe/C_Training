//this program is to understand the structure declaration type
//creating type using typedef

#include <stdio.h>
 //by using typedef, we are creating new type 
typedef struct car      //old type
{
    char *engine;
}car;   //new type

int main()
{
    car c1;
    
    //with the help of dot(.) operator we can access the memeber of the structure
    c1.engine = "DDis 190 Engine";  

    printf("%s\n", c1.engine);
}