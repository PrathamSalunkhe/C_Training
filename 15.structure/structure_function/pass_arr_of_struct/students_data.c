//this profgram is to store the students data by passsing array of structure

#include <stdio.h>

struct student_data
{
    char name[20];
    int roll_no;
    int age;
};

/// @brief accepting the array of structure variables and print the values
/// @param std 
void print(struct student_data std[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("The datails of student %d is: \n", i+1);
        printf("Name of student is: %s\n", std[i].name);
        printf("Roll No. is: %d\n", std[i].roll_no);
        printf("Age is: %d\n", std[i].age);
        printf("\n");
    }
}


int main()
{
    //std is array of structure variable of type struct student_data
    //this array contains the values of structure members
    //array of 3 structures
    struct student_data std[3] = {{"Pratham", 10, 22}, {"Ramesh", 11, 24}, {"Shivam", 12, 22}};

    print(std); //call the print function by passing the array of structure

    return 0;
}