#include<stdio.h>

int main()
{
    int number, count = 0, cnt;
    int i;
    int arr[5];
    printf("Enter the number: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }

    i=0;
    while(i<5)
    {
        
        if(i == 4) // If the index reaches the last element, player wins
        {
            printf("\nYou won\n");
            break;
        }
        else if(arr[i] == 0) // If the current element is 0, player loses
        {
            printf("\nYou lost\n");
            break;
        }
        else
        {
            i += arr[i]; // Move the index forward based on the value of the current element
        }
    }
    return 0;
}