//in this program we will understand how to pass structure members to function

#include <stdio.h>

struct st_data
{                       //structure members
    char st_name[20];   
    int roll_no;
    int age;
    float marks;
};

void data(char st_name[], int roll_no, int age, float marks)    //receiving the values
{
    printf("%s %d %d %.2f\n", st_name, roll_no, age, marks);
}

int main()
{
    struct st_data s1 = {"Pratham", 15, 22, 85.60};

    //s1 is accessing the members of structure
    //here we are passing the members of structure as an argument
    data(s1.st_name, s1.roll_no, s1.age, s1.marks);
}