//tihs program is to find the o/p

#include <stdio.h>
#include <string.h>

int main()
{
    char p[20];
    char *s = "string";
    int length = strlen(s);
    int i;
    for(i=0;i<length;i++)       //here when i=0 and length=6, s[6-0]= s[6]= '\0'
        p[i]= s[length - i];    //so when the printf function encounters null character 
    printf("%s\n", p);          //it doesn't print anything on the screen
}