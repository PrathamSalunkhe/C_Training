//this program is to copy the content of one file into another file

#include <stdio.h>

int main()
{
    FILE *fp = NULL;    //file pointer pointing to source file
    FILE *fptr = NULL;  //file pointer pointing to destination file
    char ch;
    fp = fopen("abc.txt", "r"); //open the source file into "r" mode

    fptr = fopen("destination.txt", "w+");   //open the destination file into "w" mode
    //because we have to write the content into this file

    if((fp == NULL) && (fptr == NULL))  //if one of the file is not exist there will be error
    {
        printf("Error, file is missing");
        return 1;
    }

    while((ch = fgetc(fp))!= EOF)   //read the source file until EOF
    {
        fputc(ch, fptr);    //copy(write) the content(ch) of source(fp) to destination(fptr)
    }

    printf("Successfully copied\n");
    printf("***********************************\n");
    printf("The contents of file are:");
    printf("\n***********************************\n");
    //after copying, move the pointer to the begining of the destination file
    rewind(fptr);

    while(!feof(fptr))  //read the contents of the destination file
    {
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    printf("\n");

    //close both the files
    fclose(fp);
    fclose(fptr);

    return 0;
}