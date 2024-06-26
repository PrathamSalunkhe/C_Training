#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

// typedef struct student_data
// {
//     char name[30];
//     char address[50];
//     char mob_no[11];
//     int std_id;
//     struct student_data *next;
// }STUDENT_DETAILS;


// char name[30], address[50];
// char mob_no[11];
// int std_id;

extern char c;

/// @brief this function creates the new student node, for entering into the register
/// @param head 
/// @param name 
/// @param address 
/// @param mob_no 
/// @param std_id 
/// @return return the pointer to the structure
STUDENT_DETAILS* createStudent(STUDENT_DETAILS *head, char name[], char address[], char mob_no[], char std_id[])
{
    STUDENT_DETAILS *newStudent = (STUDENT_DETAILS *)malloc(sizeof(STUDENT_DETAILS));
    if (newStudent == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newStudent->name, name);
    strcpy(newStudent->address, address);
    strcpy(newStudent->mob_no, mob_no);
    //newStudent->std_id = std_id;
    strcpy(newStudent->std_id, std_id);
    newStudent->next = NULL;

    return newStudent;
}


/// @brief this function adds the student node into the register
/// @param head 
/// @return pointer to the structure
STUDENT_DETAILS* ADD_STUDENT_DETAILS(STUDENT_DETAILS *head)
{
    char name[30], address[50];
    char mob_no[11];
    char std_id[10];

    //ask user to enter the details
    printf("Enter student name: ");
    scanf("%s", name);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter address: ");
    scanf("%s", address);
    address[strcspn(address, "\n")] = '\0';
    printf("Enter mobile no.: ");
    scanf("%s", mob_no);
    mob_no[strcspn(mob_no, "\n")] = '\0';
    printf("Enter student id: ");
    scanf("%s", std_id);
    std_id[strcspn(std_id, "\n")] = '\0';
    c = '\0';
    //printf("A.value of c is: %d\n", c);
    // printf("Enter student name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strcspn(name, "\n")] = '\0'; // Remove newline
    // printf("Enter address: ");
    // fgets(address, sizeof(address), stdin);
    // address[strcspn(address, "\n")] = '\0'; // Remove newline
    // printf("Enter mobile no.: ");
    // fgets(mob_no, sizeof(mob_no), stdin);
    // mob_no[strcspn(mob_no, "\n")] = '\0'; // Remove newline
    // printf("Enter student id: ");
    // scanf("%d", &std_id);


    // STUDENT_DETAILS *student = head;
    // printf("%s\n", student->name);
    // printf("%s\n", student->address);
    // printf("%s\n", student->mob_no);
    // printf("%d\n", student->std_id);

    
    //call this function to create the new student node, for entering into the register
    STUDENT_DETAILS *newStudent = createStudent(head, name, address, mob_no, std_id);
    c = '\0';
    if (head == NULL)
    {
        head = newStudent;
        printf("Student is successfully added\n");
    }
    else
    {
        STUDENT_DETAILS *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newStudent;
        printf("Student is successfully added\n");
    }
    //printf("B.value of c is: %d\n", c);
    return head;
}

/// @brief this function removes the custom student details from the register
/// @param head address of head
void REMOVE_STUDENT_DETAILS(STUDENT_DETAILS **head)
{
    //printf("C.value of c is: %d\n", c);
    c = '\0';
    int pos;
    printf("Enter the number of that student you want to remove: ");
    scanf("%d", &pos);
    STUDENT_DETAILS *current = *head;
    STUDENT_DETAILS *previous = NULL;

    if(*head == NULL)
    {
        printf("The list is empty.\n");
    }
    else if(pos == 1)   //if you have to delete first node
    {
        STUDENT_DETAILS *temp = *head;
        *head = (*head)->next;  //push to second node
        free(temp);  //release memory from first(current) node
        temp = NULL; //assign NULL to it
        printf("Student is successfully removed\n");
    }
    else
    {
        while(pos != 1) //if you have to remove another node in the middle of the list
        {
            previous = current; //address of current node will stored in previous node
            current = current->next;    //current node will push to next
            pos--;  //this process will done until we reaches to that node which we have to remove
            if(current == NULL)
            {
                printf("Position is out of range\n");
                return;
            }
        }           

        //after this, link the node which is next to removed node to the previous node
        previous->next = current->next;

        free(current);  //release the memory from hte current node
        current = NULL; //assign NULL to current node
        printf("Student is successfully removed\n");
    }
    
}

/// @brief this function searches the custom student details from the register
/// @param head 
void SEARCH_STUDENT_DETAILS(STUDENT_DETAILS *head)
{
    //printf("D.value of c is: %d\n", c);
    c = '\0';
    STUDENT_DETAILS *student = head;
    int pos;
    printf("Enter the number of that student you want to search: ");
    scanf("%d", &pos);
    if(head == NULL)
    {
        printf("The list is empty.\n");
    }
    else if(pos == 1)   //if you have to delete first node
    {
        // *head = current->next;  //push to second node
        // free(current);  //release memory from first(current) node
        // current = NULL; //assign NULL to it

        printf("Student name:       %s\n", student->name);
        printf("Student address:    %s\n", student->address);
        printf("student mobile no.: %s\n", student->mob_no);
        printf("Student Id:         %s\n", student->std_id);
    }
    else
    {
        while(pos != 1) //if you have to search another student in the middle of the list
        {
            student = student->next;
            pos--;  //this process will done until we reaches to that node which we have to search
            if(student == NULL)
            {
                printf("Position is out of range\n");
                return;
            }
        }           

        printf("Student name:       %s\n", student->name);
        printf("Student address:    %s\n", student->address);
        printf("student mobile no.: %s\n", student->mob_no);
        printf("Student Id:         %s\n", student->std_id);
        printf("\n");

    }

}

/// @brief this function prints all the student details which are stored in register
/// @param head 
void PRINT_ALL_STUDENT_DETAILS(STUDENT_DETAILS *head)
{
    //printf("E.value of c is: %d\n", c);
    c = '\0';
    if(head == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    printf("Student details: \n");

    int count = 1;

    while(head!=NULL)    //loop will run till head contains NULL
    {
        printf("Student %d\n", count);
        printf("Student name:       %s\n", head->name);
        printf("Student address:    %s\n", head->address);
        printf("student mobile no.: %s\n", head->mob_no);
        printf("Student Id:         %s\n", head->std_id);
        printf("\n");
        head = head->next;    //head accessing each node by accessing its next part
        count++;
    }
    printf("\n");       
}