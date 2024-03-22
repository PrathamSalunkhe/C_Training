//this program is to count the no. of lines in a file

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    int count = 1;
    fp = fopen("abc.txt", "r");

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing");   
        return 1;
    }

    while((ch = fgetc(fp))!= EOF)   //read the file character by character until theend of file
    {
        if(ch=='\n')    //if you finds the new line character
        {
            count++;    //increment the count
        }
    }
    fclose(fp); //close the file

    printf("The total lines in the file are: %d\n", count); //print the count
    return 0;
}