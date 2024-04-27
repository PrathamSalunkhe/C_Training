//this program is to store students details in one register

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

char c;

// typedef struct student_data
// {
//     char name[30];
//     char address[50];
//     char mob_no[11];
//     int std_id;
//     struct student_data *next;
// }STUDENT_DETAILS;

int main()
{
    //static char c;
    STUDENT_DETAILS *head = NULL;

    //the operation will run in infinite loop
    while (1)
    {
        //ask user to enter choice for which task it want to perform

        printf("\r\n*************************************************\r\n");
        //printf("Operations for the student details register\n");
        printf("Menu\n");
        printf("1.Add student details in the register\n");
        printf("2.Remove custom student details\n");
        printf("3.Search custom student details\n");
        printf("4.print all the details in register\n");
        printf("5.Exit\n");
        printf("\r\n*************************************************\r\n");

        printf("Enter your choice: ");
        //scanf("%c", &c);
        c = getchar();
        // if(c == '\n')
        // {
        //     c = '\0';
        //     continue;
        // }
        while(getchar() != '\n');
        //printf("0.the value of c is: %d\n", c);
    
        //as per the choice, call the function
        if(c >= '1' && c <= '5')
        {
            //printf("1.the value of c is: %d\n", c);   
            switch (c)
            {
            case '1':
                c = 0;
                head = ADD_STUDENT_DETAILS(head);   //function to enter the details into the register
                
                break;
            
            case '2':
                REMOVE_STUDENT_DETAILS(&head);   //function to remove the custom student details
                break;

            case '3':
                SEARCH_STUDENT_DETAILS(head);   //function to search the custom student detail
                break;

            case '4':
                PRINT_ALL_STUDENT_DETAILS(head);    //function to print all students details
                break;

            case '5':
                printf("Exiting...\n");     //exiting case
                exit(1);

            /*efault:
                printf("Invalid Choice\n");
                break;*/
            }
            //printf("2.the value of c is: %d\n", c);
            c='\0';
        }
        else
        {
            
            //printf("the value of c is: %d\n", c);
            printf("Please enter a valid number in range\r\n");
            c='\0';
            break;
        }
    }
    
}
