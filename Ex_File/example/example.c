//this program is to check the validity of the brackets

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int i, s_count = 0, c_count = 0, r_count = 0;
    char p[MAX];
    char s[MAX] = {0}, c[MAX] = {0}, r[MAX] = {0};

    printf("Enter the brackets: ");
    scanf("%[^\n]s", p);

    for (i = 0; i < strlen(p); i++) 
    {
        //when you encounter a left bracket, put it into the array with increment the count
        if (p[i] == '{')
        {
            c[c_count++] = p[i];
        }
        else if (p[i] == '(') 
        {
            r[r_count++] = p[i];
        } 
        else if (p[i] == '[') 
        {
            s[s_count++] = p[i];
        }
        else if (p[i] == '}')   //when you encounter the right bracket, decrement the count
        {
            c_count--;
            if (c_count < 0) 
            {
                printf("Brackets are not valid\n");
                return 0;
            }
        } 
        else if (p[i] == ')') 
        {
            r_count--;
            if (r_count < 0) 
            {
                printf("Brackets are not valid\n");
                return 0;
            }
        } 
        else if (p[i] == ']') 
        {
            s_count--;
            if (s_count < 0) 
            {
                printf("Brackets are not valid\n");
                return 0;
            }
        }
    }
    
    if (s_count == 0 && c_count == 0 && r_count == 0) 
    {
        printf("Brackets are valid\n");
    } 
    else 
    {
        printf("Brackets are not valid\n");
    }

    return 0;
}