#include <stdio.h>

int main()
{
    char ch;
    int i;
    char word[100];

    printf("ENter characters, end with enter: ");
    while (1)
    {
        ch = getchar();
        word[i] = ch;
        if(ch == '\n')
            break;
        i++;
    }
    printf("The word is: %s\n", word);  
}