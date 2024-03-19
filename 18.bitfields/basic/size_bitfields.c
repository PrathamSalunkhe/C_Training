#include <stdio.h>
#include <string.h>
//#pragma pack(1)

/* define simple structure */
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

struct {
    unsigned int f1:1,
                 f2:1,
                 f3:1;
    char f4;
}status;

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;
 
int main( ) {
   printf( "Memory size occupied by status1 : %ld\n", sizeof(status));
   //printf( "Memory size occupied by status2 : %ld\n", sizeof(status2));
   return 0;
}