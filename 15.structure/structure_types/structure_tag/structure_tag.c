//this program is to understand the structure declaration type
//creating of structure tag to decrease the redudancy of the structure declaration

#include <stdio.h>

//user defined type
struct employee     //we have created the structure tag 
{
    char *name;
    int age;
    int salary;
};

int manager()
{
    struct employee manager;    //by using this tag we can access the structure

    manager.age = 27;

    if(manager.age > 30)
    {
        manager.salary = 65000;
    }
    else
    {
        manager.salary = 55000;
    }
    return manager.salary;
}

int main()
{
    struct employee emp1;
    struct employee emp2;

    printf("Enter the salary of employe1: ");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employe2: ");
    scanf("%d", &emp2.salary);

    printf("The salary of employe1 is: %d\n", emp1.salary);
    printf("The salary of employe2 is: %d\n", emp2.salary);
    printf("The salary of manager is: %d\n", manager());    //calling the manager function

    return 0;
}