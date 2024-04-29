//this program is for sorting of array using pointers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int a[n];
    int i,j,x,c;
    printf("Enter the %d elements to store in array: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", (a+i));
    }

    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(a+i));        
    }

    printf("\n");
    printf("\nEnter your choice\n");
    printf("1.Accending order\n");
    printf("2.Descending order\n");
    
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if((*(a+j))<(*(a+i)))
                {
                    x = *(a+i);
                    *(a+i) = *(a+j);
                    *(a+j) = x;
                }
            }
        }
        printf("Accending order array is: ");
        for(i=0;i<5;i++)
        {
            printf("%d ", *(a+i));
        }
        printf("\n");
        return 0;

    case 2:
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if((*(a+j))>(*(a+i)))
                {
                    x = *(a+i);
                    *(a+i) = *(a+j);
                    *(a+j) = x;
                }
            }
        }
        printf("Descending order array is: ");
        for(i=0;i<5;i++)
        {
            printf("%d ", *(a+i));
        }
        printf("\n");
        return 0;
    
    default:
        printf("Invalid Choice\n");
        exit(1);
    }
}