//this program is to read the file 
//file can be read in the "r" mode 
//in "r" mode, opens an existing file for read purpose only.
//if the file doesn't exist in the working directory, then it will give error

/*in this directory, "abc.txt" file does not exist. so, file pointer (fp) access the NULL value
and we will get an error. */

/*if we open "pqr.txt" file then our code will work properly.
because this file exist in this directory. */
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[20];

    //to open the file
    //fopen("filename", "mode");  //r for read mode
    fp = fopen("pqr.txt", "r");

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing\n");   
        return 1;
    }

    //read the contents of the file
    //fgets(variable name, no. of characters to read at one time, file pointer)
    //fgets(buffer, size of buffer, file pointer)
    fgets(str, 20, fp);

    //we can also read the whole file in character by character
    /*while(!feof(fp))  //until the end of file loop runs
    {
        fgetc(ch, fp);
    }*/

    //print the contents of the file
    printf("%s", str);

    //after completing the operation close the file
    fclose(fp);

    return 0;
}