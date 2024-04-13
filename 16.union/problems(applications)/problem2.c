//this program is to understand the usage of union

/*in this application, we can use union to create an array of containing mixed data type*/
#include <stdio.h>

typedef union 
{
    int a;      //4 byte
    char b;     //1 byte   }//8 byte
    double c;   //8 byte
}data;

/*here, we can also use structure to create an array of mixed type data.
 but, if we use structure to create an array it will take more memory (8+4+1=13) than union(8).
 so, it is essential to use union while creating an array containing mixed type data*/
 
int main()
{
    data arr[10];
    arr[0].a = 10;
    arr[1].b = 'a';
    arr[2].c = 10.357;
    arr[3].a = 14;
    arr[4].c = 34.45;
    arr[5].c = 4.4355;
    arr[6].b = 'g';
    arr[7].b = 'w';
    arr[8].a = 24;
    arr[9].a = 34;
    //and so on.....

    printf("The array is: \n");
    int i;
    for(i=0;i<10;i++)
    {
        if(i==0 || i==3 || i==8 || i==9)
        {
            printf("%d ", arr[i].a);
        }
        else if(i==1 || i==6 || i==7)
        {
            printf("%c ", arr[i].b);
        }
        else
        {
            printf("%f ", arr[i].c);
        }
    }
    printf("\n");
    return 0;
}
