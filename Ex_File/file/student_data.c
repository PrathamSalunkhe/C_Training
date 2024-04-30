//this program is to store students details in one register

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

char c;
FILE *fptr = NULL;

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
        do
        {
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
        scanf("%c", &c);
        //c = getchar();

        if(c==32 || (c>=65 && c<=90) || (c>=97 && c<=122) || (c>=54 && c<=57) || c==0)
        {
            printf("3.Please give valid input\n");
            exit(1);
        }

        //printf("0.the value of c is: %d\n", c);
        fptr = fopen("student_details.txt", "rb");

        if(fptr == NULL)
        {
            printf("Error, can't open the file\n");
            exit(1);
        }
        //as per the choice, call the function
        if(c >= '1' && c <= '5')
        {
            //printf("1.the value of c is: %d\n", c);   
            switch (c)
            {
            case '1':
                head = ADD_STUDENT_DETAILS(head);   //function to enter the details into the register
                c = '\0';
                break;
            
            case '2':
                REMOVE_STUDENT_DETAILS(&head);   //function to remove the custom student details
                c = '\0';
                break;

            case '3':
                SEARCH_STUDENT_DETAILS(head);   //function to search the custom student detail
                c = '\0';
                break;

            case '4':
                PRINT_ALL_STUDENT_DETAILS(head);    //function to print all students details
                c = '\0';
                break;

            case '5':
                printf("Exiting...\n");     //exiting case
                exit(1);

            /*default:
                printf("Invalid Choice\n");
                break;*/
            }
            //printf("2.the value of c is: %d\n", c);
            c='\0';
        }
        else
        {
            
            //printf("the value of c is: %d\n", c);
            printf("2.Please give valid input\r\n");
            c='\0';
            exit(1);
        }
        }while(getchar() != '\n');

        if(c==32 || (c>=65 && c<=90) || (c>=97 && c<=122) || (c>=54 && c<=57))
        {
            printf("Value of c is: %d\n", c);
            printf("1.Please give valid input\n");
            exit(1);
        }
    }
    fclose(fptr);
}
