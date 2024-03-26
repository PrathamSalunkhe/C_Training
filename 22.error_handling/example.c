//this program is to understand error handling.

#include <stdio.h>

int main()
{
    FILE *fptr = NULL;  //define file pointer 

    fptr = fopen("newfile.txt", "r");   //open the file in r mode
    
    //in this program, we are trying to open the file in r mode,
    //in this mode, if the file exist in directory hten only the file will opened
    //here, file is not exist. so, program will occured error while opening the file

    if(fptr == NULL)
    {
        printf("Error opening the file\n");

        return 1;   //returning from program with error status (error code 1)
    }
    //if thefile is open successfully,
    printf("File is opened successfully\n");

    fclose(fptr);

    return 0;
}