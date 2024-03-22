//this program is to understand how to open the file and append into the file
//to write into the file, we can use fputc, fputs, fprintf

/*in append mode, if the file doesn't exist in directory. then it first creates the file
then we can write the content into the file. */

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    //open the file in append mode 
    fp = fopen("abc.txt", "a"); //to append into the file, "a" mode is use

    if(fp == NULL)  //if file pointer doesn't access the address of file
    {
        printf("Error, file is missing");   
        return 1;
    }

    //ask user to enter the content which we have to append into the file 
    printf("Enter the content you want to append: \n");
    gets(str);  //read the content using gets() function

    //write/append the content into the file
    fprintf(fp, "\n%s", str);
    
    printf("\nSuccessfully appended\n");

    //after operation is complete, close the file
    fclose(fp);

    return 0;
}