//problem based on function

#include <stdio.h>
int count = 2;
int func(int num)    //function defined
{
    while(num)
    {
        count++;   //increment count and 
        num >>=2;  //left shift num by 2
    }
    return(count);  //return count  
}

int main()
{
    func(435);    //call function in main function
    printf("%d\n", count);  //print count
}