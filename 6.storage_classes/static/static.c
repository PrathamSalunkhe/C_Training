// this program is for static variable

#include <stdio.h>
#include "other.h"
extern int count;
int main()
{
    int value;
    value = increament();
    value = increament();
    value = increament();
    value = increament();
    count = count + 3;
    value = count;
    printf("%d", value);
    return 0;
}