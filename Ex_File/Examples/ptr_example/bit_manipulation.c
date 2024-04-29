//this program is to do bit manipulation of address

#include <stdio.h>

int set(int, int);
int reset(int, int);

int main()
{
    int a;
    int pos;
    int set_result, reset_result;

    printf("Enter the number: ");
    scanf("%x", &a);

    printf("Enter the bit position you want to set or reset: ");
    scanf("%d", &pos);

    
    int choice;
    printf("Enter choice: \n");
    printf("1.Set\n");
    printf("2.Reset\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        set_result = set(a,pos);
        printf("THe resultant number is: %d\n", set_result);
        break;

    case 2:
        reset_result = reset(a,pos);
        printf("THe resultant number is: %d\n", reset_result);
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}

int set(int number, int position)
{
    number |= (1 << position);
    return number;
}

int reset(int number, int position)
{
    number &= ~(1 << position);
    return number;
}

