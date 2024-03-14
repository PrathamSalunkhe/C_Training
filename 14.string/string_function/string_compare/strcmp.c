//this program is to understand string comparison

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "pqrst";
    char *s2 = "pqrst";
    
    /*if(strcmp(s1,s2)<0)       //strcmp() function compares two strings
    printf("s1 is less than s2\n");
    else
    printf("s1 is greater than or equal to s2\n");
    return 0;*/

    //print the two strings
    printf("string s1 is: %s\n", s1);
    printf("string s2 is: %s\n", s2);

    //storing the return value of comparison into res
    int res = strcmp(s1, s2);

    //printing the return value of strcmp()
    printf("the return value of strcmp() is: %d\n", res);

    if(res==0)      //if return value is zero
        printf("s1 and s2 are equal\n");

    else            //if return value is less than or greater than to zero
        printf("s1 and s2 are not equal\n");

    return 0;
}