//this program is to understand the usage of union

/*in this application, we can use union to create an array of containing mixed data type*/

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
    //and so on.....

    return 0;
}
