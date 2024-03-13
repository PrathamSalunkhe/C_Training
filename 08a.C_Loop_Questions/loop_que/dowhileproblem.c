//reverse a given integer using do while loop
#include <stdio.h>
int main()
{
    int i,m,rev_num=0;
    printf("Enter a number\n");
    scanf("%d", &i);
    do
    {    
        m = i%10;       //separate the number        
        rev_num = rev_num*10 + m;   //stored the separated digits into rev number
        i=i/10;
    } while (i!=0);
    printf("Reverse number is: %d\n", rev_num);
}