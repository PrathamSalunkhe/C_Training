//this program is to initialize and access the members of structures

#include <stdio.h>

//structure defined
struct car
{
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    //initialization of variables
    //here c1 and c2 are the variable of type struct car
    struct car c1 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74};
    struct car c2 = {"kappa", "petrol", 22, 8, 14.5};

    //accessing the structure members
    printf("%s\n", c1.engine);
    printf("%d\n", c1.seating_cap); 
    printf("%f\n", c2.city_mileage);
}