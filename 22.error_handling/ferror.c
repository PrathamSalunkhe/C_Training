//this program is to understand ferror() function, in error handling

#include <stdio.h>
#include <errno.h>

int main()
{
    FILE *fp;
    fp = fopen("nonexistent_file.txt", "r");
    if (fp == NULL) {
        perror("Error"); // Print the error message corresponding to errno
        printf("Error no = %d\n", errno);
        return 1;
    }

    int c;
    while((c = fgetc(fp))!= EOF)
    {       // Print an error message if an error occurred during file reading
        if(ferror(fp))
        {
            printf("An error occured while reading the file.\n");
        }
        else
        {
            printf("File is successfully read.\n");
        }
    }
    
    fclose(fp);

    return 0;   
}