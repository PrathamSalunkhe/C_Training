//this program is to read the file 
//file can be read in the "r" mode 
//in "r" mode, opens an existing file for read purpose only.
//if the file doesn't exist in the working directory, then it will give error

/*in this directory, "abc.txt" file exist. so, file pointer(fp) access the address of that file
and we will read the contents of that file. */
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[20];

    //to open the file
    //fopen("filename", "mode");  //r for read mode
    fp = fopen("abc.txt", "r");

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing\n");   
        return 1;
    }

    //read the contents of the file
    //fgets(variable name, no. of characters to read at one time, file pointer)
    //fgets(str, 18, fp);

    while (!feof(fp)) //we can also read the whole file by this loop
    {                        //loop will run until the end of file
        fgets(str, 10, fp);
        printf("%s", str);
    }
    
    //print the contents of the file
    //printf("%s", str);

    //after completing the operation close the file
    fclose(fp);

    return 0;
}