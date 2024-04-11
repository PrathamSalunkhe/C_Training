//this program is to check whether the brackets are valid or not

#include<stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    int i,j,k,l;
    char p[MAX];
    char s[MAX],c[MAX],r[MAX];
    
    printf("Enter the brackets: ");
    scanf("%[^\n]s", p);
    for(i=0;i<strlen(p);i++)
    {
        // if(p[i]== '{' || p[i]== '(' || p[i]=='[')
        // {
            if(p[i]=='{')
            {
                c[i] = p[i];
            }
            else if(p[i]=='(')
            {
                r[i] = p[i];
            }
            else if(p[i]=='[')
            {
                s[i] = p[i];
            }
        // }
        // else if(p[i]='}' || p[i]== ')' || p[i]== ']')
        // {
            else if(p[i]=='}')
            {
                c[i] = p[i];
            }
            else if(p[i]==')')
            {
                r[i] = p[i];
            }
            else if(p[i]==']')
            {
                s[i] = p[i];
            }
        // }
    }
    int count1 = 0;
    for(j=0;j<strlen(s);j++)
    {
        printf("%c ", s[j]);
        count1++;
    }
    int count2 = 0;
    for(k=0;k<strlen(c);k++)
    {
        printf("%c ", c[k]);
        count2++;
    }
    int count3 = 0;
    for(l=0;l<strlen(r);l++)
    {
        printf("%c ", r[l]);
        count3++;
    }
    printf("count1 = %d\n", count1);
    printf("count2 = %d\n", count2);
    printf("count3 = %d\n", count3);
    //if(count1%2==0 && count2%2==0 && count3%2==0)
    if(count1 == 2 && count2 == 3 && count3 == 2)
    {
        printf("Brackets are valid\n");
    }
    else
    {
        printf("Brackets are not valid\n");
    }
    return 0;
}