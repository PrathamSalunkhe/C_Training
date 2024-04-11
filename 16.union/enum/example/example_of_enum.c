//this program is for the example of enum

#include <stdio.h>

//we have declared enum globally.  we can also declare it in local scope
//as we have initialized first name, 
//then all the uninitialized names were initialized by previous_name + 1. 
enum week {monday=1, tuesday, wednesday, thursday, friday, saturday, sunday};

/*enum year {january, february, march, thursday, may, june};*/
//here all enum constants must be unique, we can't put name of one enum into other enum
//if it is declared in one scope  

int main()
{
    char *days[] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    enum week day;  //here, we have declared variable 'day' of type enum week
    //enum year month;
    day = friday;   //name(containing integral constant) assign to variable
    printf("The day number stored in friday is %d\n", day);
    
    int i;
    //we can also check the working of enum
    //loop will run from i=1 to i=7,
    // as initially the value of i is monday which is 1 and the value of sunday is 7. 
    for(i=monday; i<=sunday; i++)
    {
        printf("%d %s\n", i, days[i]);
    }
    return 0;
}