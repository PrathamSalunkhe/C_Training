//problem based on conditional operators

#include <stdio.h>

int main()
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    /*we will solve the problem here
      first cond is (sizeof(var)) this it true so it will returned
      after second cond (var2 > 23) this is also true, so it will returned
      third cond (var == 75) this is true, it will returned
      so 'A' will stored in num 
      as we have given %d as format specifier so integer value will be printed
      ascii value of 'A' will be printed as output */

    /*if(sizeof(var))
    {
        printf("var size true\r\n");
        printf("value of var = %d\r\n",var2);
        if(var2 > 23)
        {
            printf("Var2 value is greater than 23 \r\n");
            if(var == 75)
            {
                printf("Var value is equal to 75 \r\n");

                num = 'A';
            }
        }
    }*/


    printf("%d\n", num);
    return 0;
}