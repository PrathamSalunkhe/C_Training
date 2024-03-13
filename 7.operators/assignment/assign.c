//problem based on assignment operator

#include <stdio.h>

int main()
{
    char a = 7;

    //a = a^5 = 7^5
    //0111^0101 = 0010 = a=2
    a ^= 5;

    /* a = a+3 = 2+3 = 5 a=5
     new st. will be printf("%d", 1);
     outer printf fun. will print the no. of char it has printed in inner printf st.
     so the output will be 51 */
    printf("%d\n", printf("%d", a+=3));
    return 0;
}