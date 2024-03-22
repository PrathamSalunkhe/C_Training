//this program is to understand the structure pointer
//pointers pointing to a structure variables

#include <stdio.h>

//we have declare a structure that contains different properties of book
struct book
{
    char title[30];
    int num_pages;
    double price;
};

int main()
{
    //b1 is a variable of type struct book
    //b1 accessing all the mambers of structure
    struct book b1 = {"Wings of Fire", 256, 380};

    //ptr is a pointer to some variable of type stuct book. 
    //it contains the address of b1 which is a variable of type struct book 
    struct book *ptr = &b1;

    printf("The datails of book are: \n");
    //here, ptr is accessing the elements of structure using arrow operator
    printf("Title: %s\n", ptr->title);
    printf("No. of pages: %d\n", ptr->num_pages);
    printf("Price: %lf\n", ptr->price);
    return 0;
}