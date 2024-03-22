//this program is to understand self referential structure

#include <stdio.h>

typedef struct str{
    int mem1;
    int mem2;
    struct str* next;
}str;

int main()
{
    str var1 = {1,2,NULL};
    str var2 = {10,20,NULL};

    //init. var1.next = NULL
    //assigning address of var2 to var1.next
    //now, var1.next = 10, 20, null
    var1.next = &var2;
    
    //pointer to var1
    str *ptr1 = &var1;

    printf("var2.mem1: %d\nvar2.mem2: %d\n", ptr1->next->mem1, ptr1->next->mem2);
    return 0;
}