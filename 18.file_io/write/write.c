//this program is to understand how to open the file and wrtie into the file
//to write into the file, we can use fputc, fputs, fprintf


#include <stdio.h>

int main()
{
    //fp is a file pointer pointing to the type of FILE
    FILE *fp = NULL;    //initially it contains NULL
    char ch = 'a';
    char str[20];
    int a = 10;

    //to open the file
    //fopen("filename", "mode");  //w for write mode
    fp = fopen("abc.txt", "w");

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing\n"); 
        return 1;
    }

    //ask user to enter the input
    printf("Enter the string: ");
    gets(str);

    //fputc(variable name, file pointer)
    //fputc(ch, fp);    //while writing the character to the file 

    //fputs(variable name, file pointer)
    // fputs(str, fp);  //while writing the string to the file 

    //fprintf(file pointer, format specifier, variable name)
    fprintf(fp, "%c %s %d", ch, str, a);   //while writing multiple variables to the file

    //after completing the operation close the file
    fclose(fp);

    return 0;
}