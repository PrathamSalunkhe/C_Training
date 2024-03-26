//this program is for error handling

/*#include <stdio.h>
#include <errno.h>  //header file of error function
*/
#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp;
    fp = fopen("nonexistent_file.txt", "r");
    if (fp == NULL) {
        perror("Error"); // Print the error message corresponding to errno
        printf("Error no = %d\n", errno);
        return 1;
    }
    return 0;
}