//this program is for decimal to binary
#include <stdio.h>
int main()
{
    int binary, rem, weight,num, decimal;
    printf("Enter a binary number: ");   //get a binary number from user
    scanf("%d", &binary);
    num=binary;
    weight=1, decimal=0;
    while(binary!=0)  //follow the loop until number not equal to 0
    {
        rem = binary % 10;   //get the last digit of number
        decimal = decimal + rem*weight; //multiply it with the weight of that number and add to decimal
        binary = binary/10;   //truncate the last digit and get the remaining number
        weight = weight*2;    //multiply the weight with 2
    }
    printf("The decimal equivalent of %d is: %d\n",num, decimal);
}