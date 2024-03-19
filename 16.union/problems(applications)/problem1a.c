//this program is to understand the usage of union (application of union)

/*by the use of this application of union, we can store the different properties of different
 items into one block of container*/
#include <stdio.h>

#pragma pack(1)

struct store    //this represents the main store in which all the items are storedsss
{
    double price;   //it is a common property                       //8bytes
    union       //in this one union, two sttructures are maintained  
    {
        struct      //it belongs to book
        {
            char *title;    //8 bytes
            char *author;   //8 bytes                               //20 bytes
            int num_pages;  //4 bytes
        }book;
                                                    
        struct      //it belongs to shirt 
        {
            int colour;     //4 bytes
            int size;       //4 bytes                               //16 bytes
            char *design;   //8 bytes
        }shirt;
    }item;
};         //as the max size of union is 20 so the overall size of s is 20+8 = 28 bytes

int main()
{
    struct store s;
    s.item.book.title = "The Alchemist";
    s.item.book.author = "Paulo Coelho";
    s.item.book.num_pages = 197;
    
    printf("%s\n", s.item.book.title);
    printf("%ld\n", sizeof(s));     //size of s is 28 bytes

    return 0;
}