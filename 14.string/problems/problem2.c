//tihs program is to find the o/p

#include <stdio.h>

int main()
{
    char c[] = "GATE2011";
    char *p = c;

    //here p contains the initial address (1000) of the string, p[3]= 'E'= 69, p[1]= 'A'= 65
    //p + E - A = 1000 + 69 - 65 = 1000 + 4 = 1004 
    printf("%s\n", p + p[3] - p[1]);    //from 1004 to '\0' characters will be printed
    return 0;
}