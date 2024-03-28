//this program is to understand basics about command line arguments

#include<stdio.h>

//here, argc means the count of arguments(total number of arguments)
//and , argv means the values of the argument. it is the pointer array of that values
int main(int argc, char *argv[])
{
    printf("The value of argc is: %d \n", argc);    //here, we can print the count of the arguments
    for(int i=0; i<argc; i++)
    {
        //here, wecan print the values of the arguments
        printf("This argument at index number %d has value of %s \n", i, argv[i]);
    }
    return 0;
}