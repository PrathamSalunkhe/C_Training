//this program is to stored the record of books

#include <stdio.h>
#include <string.h>

typedef struct book_details
{
    char title[20];
    int price;
    int num_pages;
}book;

int main()
{
    //b1 is a variable of type book
    book b1;

    //assigning the values of the members to the structure variable
    strcpy(b1.title, "C Programming");
    b1.price = 350;
    b1.num_pages = 535;

    //b1 accessing the values of members
    printf("The title of book is: %s\n", b1.title);
    printf("The price of book is: %d\n", b1.price);
    printf("The No. of pages are: %d\n", b1.num_pages);

    return 0;
}