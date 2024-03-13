//this program is for addition of two numbers without + operator
#include <stdio.h>
int main()
{
    int a,b,sum,carry;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    while(b!=0)
    {
        sum = a^b;    //do a xor b and stored it in sum
        carry = (a&b)<<1;  //do a and b with left shit digit by one and stored it into carry
        a = sum;        //store sum into a
        b = carry;     //store carry into b
    }

    printf("The sum of two numbers is: %d\n", a);   //print a
    return 0;
}