//this program is to understand how to declare an array of structures

//instead of declaring multiple variables, we can also declare an array of structure
//in which each element in an array will be represent a structure variable
#include <stdio.h>

struct car
{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    //c[2] represents array of structure variables
    struct car c[2];    //here, there are 2 elements in array. so, car1, car2.
    int i;
    for(i=0;i<2;i++)    //loop will execute 2 times
    {                   //details of 2 cars has been stored in variable
        printf("Enter the car %d fuel tank capacity: ", i+1);   //when i=0 -> 0+1= 1 car1
        scanf("%d", &c[i].fuel_tank_cap);                       //when i=1 -> 1+1= 2 car2
        printf("Enter the car %d seating capacity: ", i+1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter the car %d city mileage: ", i+1);
        scanf("%f", &c[i].city_mileage);
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("\ncar %d details are: \n", i+1);
        printf("fuel tank capacity: %d\n", c[i].fuel_tank_cap); //accessing the members
        printf("seating capacity: %d\n", c[i].seating_cap);
        printf("city mileage: %f\n", c[i].city_mileage);
    }
    return 0;
}