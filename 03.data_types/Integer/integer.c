//this program is to add two numbers

#include <stdio.h>
int main()
{
	int a,b,c;
	//take two number as input from the user
	printf("Enter the numbers");
	scanf("%d%d", &a,&b);

	//operate them
	c=a+b;

	//print the addition
	printf("The addition is : %d", c);
	return 0;
}
