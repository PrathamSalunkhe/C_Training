//this file contains the declaration of all functions

#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct student_data
{
    char name[30];
    char address[50];
    char mob_no[11];
    char std_id[10];
    struct student_data *next;
}STUDENT_DETAILS;


STUDENT_DETAILS* createStudent(STUDENT_DETAILS *, char name[], char address[], char mob_no[], char std_id[]);
STUDENT_DETAILS* ADD_STUDENT_DETAILS(STUDENT_DETAILS *);
void REMOVE_STUDENT_DETAILS(STUDENT_DETAILS **);
void SEARCH_STUDENT_DETAILS(STUDENT_DETAILS *);
void PRINT_ALL_STUDENT_DETAILS(STUDENT_DETAILS *);

#endif