#include <stdio.h>
#include <string.h>
//#pragma pack(1)

/* define simple structure */
struct {
   unsigned int widthValidated;  //4 byte
   unsigned int heightValidated; //4 byte
} status1;

struct {
    unsigned int f1:1,
                 f2:1,
                 f3:1;  //1 byte
    char f4;   //1 byte
}status; //2 bytes while packing and 4 bytes while padding

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;  //1 byte while packing and 4 byte while padding
 
int main( ) 
{
   printf( "Memory size occupied by status : %ld\n", sizeof(status));
   printf( "Memory size occupied by status1 : %ld\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %ld\n", sizeof(status2));
   return 0;
}