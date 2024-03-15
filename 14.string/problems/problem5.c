//this program is to find the o/p

#include <stdio.h>
#include <string.h>

int main()
{
    char *c = "GATECDIT2017";
    char *p = c;

    //here c contains the initial address (1000) of the string, 
    //2[p]= *(2+p)= *(p+2)= 'T' = 84
    //6[p]= *(6+p)= *(p+6)= 'I' = 73 
    //c + T - I - 1 = 1000 + 84 - 73 - 1 = 1000+11-1 = 1010
    //form 1010 address, strlen will find the length
    //as strlen returns the size_t data. so, int will convert size_t to int type by typecasting
    printf("%d\n", (int)strlen(c + 2[p] - 6[p] - 1));

    //on this add(1010) '1' is there, so from 1 length will be calculate 
    //output will be 2
    return 0;
}