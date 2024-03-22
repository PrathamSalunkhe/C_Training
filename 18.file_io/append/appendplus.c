//this program is to understand "a+" mode in file handling 
//in this mode, if file is exist then it opens the file for read and append
//if file doesn't exist, then it will create new file

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    //char str[50];
    char ch;

    fp = fopen("abc.txt", "a+"); //opened the file in "a+" mode

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing");   
        return 1;
    }

    //And the output is always appended to the end of the file.
    fputs("welcome all", fp);   //whatever yuo will write,it will appended 

    //rewind(fp);

    //in "a+" mode, file pointer initially points to last character. but,
    //The initial file position for reading is at the beginning of the file,
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c", ch);
    }   

    fclose(fp);

    return 0;
}