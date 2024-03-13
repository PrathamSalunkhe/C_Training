//this program is to allow user to enter a integer untill he/she enters a negative number

#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);

    while(i != 0)
    {
        if(i < 0)   //if it is true
            break;  //it will break the loop and we came outside the loop
        printf("Enter a number");
        scanf("%d", &i);
    }
    return 0;
}