//this program is to find the power of an integer
#include <stdio.h>
int main()
{
    int base, exponent,expo, power = 1;
    double power1 = 1.0;
    printf("Enter the base: \n");  //take base from the user
    scanf("%d", &base);
    printf("Enter the exponent: \n"); //take exponent from the user
    scanf("%d", &exponent);

    expo = exponent;   //use variable expo to store the exponent
    if(exponent > 0)  
    {
        while(exponent != 0)   //run till exponent not equal to zero
        {
            power = power * base;  //multiply base with the power
            exponent--;           //decrement the exponent
        }
        printf("%d to the power of %d is %d\n", base,expo, power);
    }
    else
    {
        while(exponent != 0)  //run till exponent not equal to zero
        {
            power1 = power1*(1.0/base); //divide base by one multiply it with power
            exponent++;              //increment the exponent
        }
        printf("%d to the power of %d is %.10f\n", base,expo,power1);
    }
    return 0;
}