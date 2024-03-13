//this program is writed to understand the float, double, long double 

#include <stdio.h>
int main()
{
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;
    printf("%ld\n", sizeof(float));         //size of float
    printf("%ld\n", sizeof(double));      //size of double
    printf("%ld\n", sizeof(long double));  //size of long double
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);
    return 0;
}