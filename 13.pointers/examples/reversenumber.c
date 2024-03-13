//this program is to reverse the number using pointer

#include <stdio.h>
int rev_num(int *, int *, int *);  //declare the function

int main()
{
    int n,m;
    int rev=0, res;
    printf("Enter the number: \n");  //ask user to enter the number
    scanf("%d", &n);

    //return value will store in m
    m = rev_num(&n,&res,&rev);  //call the function

    //printf("The reverse number is %d\n", rev);
    
    printf("The value of m is: %d\n", m);  //output will print here

    //printf("The return value is: %d\n", rev_num(&n,&res,&rev));
}

int rev_num(int *p, int *q, int *r)  //define the function
{
    int c;
    while(*p!=0)
    {
        (*q) = (*p)%10;
        (*r) = (*r)*10 + (*q);
        (*p) = (*p)/10;
    }
    c = *r;    //store the result in c
    return c;  //return c to the called function
}