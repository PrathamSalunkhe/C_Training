//this program is to inderstand the "r+" mode in file handling
//in this mode, if file is exist then it opens the file for read and write
//if file is not exist, then it will return NULL and program shows error
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    fp = fopen("pqr.txt", "r+");   //open the file in "r+" mode

    if(fp== NULL)
    {
        printf("Error, file is miising");
        return 1;
    }

    while(!feof(fp))    //read the content in the file
    {
        fgets(str,50, fp);
        printf("%s", str);
    }   //in "r+" mode, file pointer initially points to first character.
    //it reads whatever the file contains.

    //after reading, pointer points to last character. then whatever we write into the file
    //it will stored from the end of the previous content.
    fputs("hello world, pratham here",fp);    //write the content into the file
    
    fclose(fp); //close the file
    return 0;

    //if we use rewind function after reading the file, the pointer will point to start of file 
    //and whatever we will write, it will overwrite.
    // rewind(fp); //this function is use to bring the file pointer to the begining of the file.
}