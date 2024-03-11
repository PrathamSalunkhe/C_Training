//this program is to perform multiple operations on array

#include <stdio.h>

//function declaration
int sum_of_all();
int maximum_ele();
int minimum_ele();
int reverse_arr();
int sort_arr();

int main()
{
    int x,min,max;
    int addition=0;
    
    while(1)
    {
    
        printf("\r\n*************************************************\r\n");
        printf("array operations\n");
        printf("1.Find sum of all elements\n");
        printf("2.Find maximum element\n");
        printf("3.Find minimum element\n");
        printf("4.Reverse the array\n");
        printf("5.Check if the array is sorted\n");
        printf("6.Exit\n");
        printf("\r\n*************************************************\r\n");
    
        printf("Enter your choice: ");  //ask user to enter the choice
        scanf("%d", &x);
        
        printf("Value of x is : %d\r\n",x);
        //if(x == 6)   //if user enters choice 6, then break the loop
        //{
        //    break;   //exit from the program
        //}
        //choice must be from 1 to 5 only        
        if((x>=1) && (x<=5))
        {
            switch (x)
            {
                case 1:                        //in first choice
                    addition = sum_of_all();   //sum of all elements function called
                    if(addition == -1)
                    {
                        printf("Please enter a valid size of an array\r\n");
                        break;
                    }
                    else
                        printf("\nThe sum of all elements is: %d\n", addition);   
                    break;
                case 2:                    //in second choice
                    max = maximum_ele();   //maximum elements function called
                    if(max == -1)
                    {
                        printf("Please enter a valid size of an array\r\n");
                        break;
                    }
                    else
                        printf("\nThe maximum element in an array is: %d\n", max);
                    break;
                case 3:                   //in third choice
                    min = minimum_ele();  //minimum elements function called
                    if(min == -1)
                    {
                        printf("Please enter a valid size of an array\r\n");
                        break;
                    }
                    else
                        printf("\nThe minimum element in an array is: %d\n", min);
                    break;
                case 4:                //in fourth choice
                    reverse_arr();     //reverse array function called
                    break;
                case 5:               //in fifth choice
                    sort_arr();       //sorting of array function called
                    break;
                default:
                    printf("Please enter a valid number\r\n");
                    break;
            }
            x=0;
        }
        else
        {
            printf("Please enter a valid number in range\r\n");
            x=0;
            break;
        } 
    }
    printf("Exiting the program\n");
}

//function defination of sum of all elements
int sum_of_all()
{
    int i,n,sum=0;
    printf("Enter the size of array\n");
    scanf("%d", &n);  //size of array must be greater than 0
    printf("value of n : %d\r\n",n);

     
    if((n>0) && (n<100))
    {
        int a[n];
        printf("Enter the %d elements of an array: ",n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The array is:  ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        for(i=0;i<n;i++)
        {
             sum += a[i];
        }
        n=0;
        //printf("Return 1 \r\n");
        return sum;

    }
    else
    {
        n=0;
        //printf("Return -1 \r\n");
        return -1;
    }
}

//function defination of maximum elements
int maximum_ele()
{
    int i,n,max;
    printf("Enter the size of array\n");
    scanf("%d", &n);   //size of array must be greater than 0
    printf("value of n : %d\r\n",n);

    if((n>0) && (n<100))
    {
        int a[n];
        printf("Enter the %d elements of an array: ",n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        max = a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
        }
        n=0;
        return max;
    }
    else
    {
        n=0;
        return -1;
    }
}

//function defination of minimum elements
int minimum_ele()
{
    int i,n,min;
    printf("Enter the size of array\n");
    scanf("%d", &n);     //size of array must be greater than 0
    printf("value of n : %d\r\n",n);

    if((n>0) && (n<100))
    {
        int a[n];
        printf("Enter the %d elements of an array: ",n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        min = a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        n=0;
        return min;
    }
    else
    {
        n=0;
        return -1;
    }
}

//function defination of reverse array
int reverse_arr()
{
    int i,n;
    printf("Enter the size of array\n");
    scanf("%d", &n);      //size of array must be greater than 0
    printf("value of n : %d\r\n",n);

    if((n>0) && (n<100))
    {
        int a[n];
        printf("Enter the %d elements of an array: ", n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nThe reverse array is: ");
        for(i=n-1;i>=0;i--)
        {
            printf("%d ", a[i]);
        }
        n=0;
    }
    else
    {
        n=0;
        printf("Please enter a valid size of an array\r\n");
    }
}

//function defination of sorting the array
int sort_arr()
{
    int n;
    int i,j,c,p;
    printf("Enter the size of array\n");
    scanf("%d", &n);     //size of array must be greater than 0
    printf("value of n : %d\r\n",n);

    if((n>0) && (n<100))
    {
        int a[n];
        printf("Enter the %d elements of an array: ", n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nwhich operation you want to perform: \n");
        printf("1. Ascending order array\n");
        printf("2. Decending order array\n");
        printf("Enter the choice: ");
        scanf("%d", &c);
    
        switch (c)
        {
        case 1:
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        p=a[i];
                        a[i]=a[j];
                        a[j]=p;
                    }
                }
            }
            printf("The ascending order of array is: ");
            for(i=0;i<n;i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]>a[i])
                    {
                        p=a[i];
                        a[i]=a[j];
                        a[j]=p;
                    }
                }
            }
            printf("The decending order of array is: ");
            for(i=0;i<n;i++)
            {
                printf("%d ", a[i]);
            }
            break;
    
        default:
            printf("Invalid input\n");
            break;
        }
        n=0;
    }
    else
    {
        n=0;
        printf("Please enter a valid size of an array\r\n");
        
    }
}
