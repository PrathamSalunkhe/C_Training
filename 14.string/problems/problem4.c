//this program is to find the o/p

#include <stdio.h>

void fun1(char *s1, char *s2)   //contents of str1, str2 received here 
{                               //str1, str2 contents the addresses
    char *tmp;                  //here, addresses are swapping
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

void fun2(char **s1, char **s2) //addresses of str1, str2 received here
{                               //str1, str2 contents the addresses
    char *tmp;                  //here, contents of str1, str2 swapping
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int main()
{
    char *str1 = "Hi", *str2 = "Bye";
    fun1(str1,str2);                    //contents of str1, str2 passed to function
    printf("%s %s ", str1, str2);   //hi bye
    fun2(&str1,&str2);                  //addresses of str1, str2 passed to function
    printf("%s %s ", str1, str2);   //bye hi
}