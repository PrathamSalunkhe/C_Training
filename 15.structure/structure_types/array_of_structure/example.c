//this program is for array of structure example

#include <stdio.h>

typedef struct book_details
{
    char title[20];
    int price;
    int num_pages;
}book;

int main()
{
    book bk[3] = {{"physics", 130, 300},        //0th posiiton
                    {"chemistry", 120, 326},    //1st posiiton
                    {"maths", 160, 435}};       //2nd posiiton

    //as details of book are stored in array, 
    //by printing the bellow statements, we are accessing third element from the array
    //as array elements starts from 0 
    printf("tittle of book is: %s\n", bk[2].title); 
    printf("price of book is: %d\n", bk[2].price);
    printf("No. of pages are: %d\n", bk[2].num_pages);
}