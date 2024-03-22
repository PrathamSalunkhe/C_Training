//this program is to understand "w+" mode in file handling 
//in this mode, if file is exist then it opens the file for write and read
//if file doesn't exist, then it will create new file
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char str[50];
    char ch;
    fp = fopen("abc.txt", "w+");   //open the file in "w+" mode

    if(fp== NULL)
    {
        printf("Error, file is miising");
        return 1;
    }

    fputs("welcome to c programming",fp);   //write the content into the file

    //after writing the content move your cursor to the start of the file
    rewind(fp); //this function is use to bring the file pointer to the begining of the file.

    while(!feof(fp))     //read the content in the file
    {
        ch=fgetc(fp);
        printf("%c", ch);
    }

    // fgets(str, 50, fp);  //read the content in the file
    // printf("%s", str);
    fclose(fp);

    return 0;
}