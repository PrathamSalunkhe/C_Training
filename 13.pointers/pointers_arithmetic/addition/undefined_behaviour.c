/*performing arithmetic on pointers which are not pointing to array element
leads to undefined behaviour (different outputs everytime)*/

#include <stdio.h>
int main()
{
    int i = 1;
    int *p = &i;
    printf("%d\n", *(p+3));
    return 0;
}