//this program is to print the string using puts function

#include <stdio.h>
int main()
{
    /*char *ptr = "Hello Pratham Salunkhe Here";

    puts(ptr);  //puts will printf the string
    puts(ptr);  //puts function automatically writes a newline character*/
    char a[10];
    printf("Enter a string\n");
    gets(a);
    //scanf("%s", a);
    printf("%s", a);
}