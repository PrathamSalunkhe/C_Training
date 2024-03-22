//this program is to store students data using array of structure

#include <stdio.h>


struct student_data
{
    char st_name[10];   //10 bytes
    int roll_no;        //4 bytes
    int age;            //4 bytes
};

int main()
{
    //std[3] represents array of structure variables
    struct student_data std[3] = {{"Pratham", 10, 23},
                                    {"Rahul", 11, 22}, 
                                    {"Shubham", 12, 23}};
    int i;

    /*for(i=0;i<3;i++)
    {
        printf("Enter details for student %d\n", i+1);
        printf("Enter the student name: \n");
        scanf("%s", &std[i].st_name);
        printf("Enter roll no.: \n");
        scanf("%d", &std[i].roll_no);
        printf("Enter age: \n");
        scanf("%d", &std[i].age);
        printf("\n");
    }*/

    printf("Size of struct is: %ld\n", sizeof(std));

    for(i=0;i<3;i++)
    {
        printf("THe datails of student %d are\n", i+1);
        printf("Name of student is: %s\n", std[i].st_name);
        printf("Roll No. is: %d\n", std[i].roll_no);
        printf("Age is %d\n", std[i].age);
        printf("\n");
    }

    return 0;
}