//this program is to understand the usage of union

#include <stdio.h>
#pragma pack(1)     //we have taken packing

struct store
{
    double price;
    char *title;
    char *author;
    int num_pages;
    int color;
    int size;
    char *design;
};

    /*in this program size of the structure is much large
        and we couldn't store the information of two items*/

    //to overcome from this problem, we should use union
int main()
{
    struct store book;
    book.title = "The Alchemist";
    book.author = "Paulo Colheo";
    book.num_pages = 197;
    book.price = 234;

    printf("%ld\n", sizeof(book));
    return 0;
}