//this program is to perform operations on string

#include <stdio.h>

//function declaration
void myfunc_strcpy(char*, char*);
void myfunc_strcat(char*, char*);
void myfunc_strup(char*, char*);
void myfunc_strstr(char*, char*);
void myfunc_strup(char*, char*);
void myfunc_strlow(char*, char*);

int main()
{
    int choice;
    char str1[100];
    char str2[100];


    printf("Enter your choice: \n");    //ask user to enter the choice
    printf("1. for copy strings\n");
    printf("2. for concatenate strings\n");
    printf("3. for finding the substring\n");
    printf("4. for counting uppercase letter in string\n");
    printf("5. for counting lowercase letter in string\n");
    scanf("%d", &choice);

    printf("Enter a string1: \n");  //enter the string1
    scanf("%s", str1);
    printf("Enter a string2: \n");  //enter the string2
    scanf("%s", str2);

    switch (choice)
    {
    case 1:                         //if choice is 1
        myfunc_strcpy(str1, str2);  //call this function
        break;
    
    case 2:                         //if choice is 2
        myfunc_strcat(str1, str2);  //call this function
        break;

    case 3:                         //if choice is 3
        myfunc_strstr(str1, str2);  //call this function
        break;
    
    case 4:                         //if choice is 4
        myfunc_strup(str1, str2);   //call this function
        break;

    case 5:                         //if choice is 5
        myfunc_strlow(str1, str2);  //call this function
        break;

    default:
        printf("Invalid Choice\n");
        return 0;
    }
}

void myfunc_strcpy(char* str1,char* str2)   //function defination
{
    int i=0;
    while(str1[i]!= '\0')
    {
        str2[i] = str1[i];      //characters of str1 will copied to str2
        i++; 
    }
    printf("str2 is: %s\n", str2);
}

void myfunc_strcat(char* str1, char* str2)  //function defination
{
    int i=0,j=0, length1=0;

    while(str1[i]!= '\0')
    {
        length1++;          //length of str1
        i++;
    }
    i = 0;
    while(str2[j]!= '\0')
    {
        //characters of str2 will stored to str1 from last char of str1
        str1[length1 + i] = str2[j]; 
        i++;
        j++;
        
    }
    printf("%s\n", str1);
}


void myfunc_strstr(char *str1, char *str2)
{
    int i=0, j=0, c=0;

    while((str1[i])!='\0')  //str1 will check till null character
    {
        if(str2[j]!=str1[i])    //if both characters doesn't matches
        {
            i++;        //then i will increments 
        }
        else if(str2[j]==str1[i])   //when the characters matches
        {
            while(str2[j]!='\0')    //substring will check till the null character
            {
                if(str1[i]==str2[j])    //if the character matches. then
                {
                    i++;        //characters of mainstring forwards(increments)
                    j++;        //characters of substring forwards(increments)
                    c++;        //count will increment
                }
                else                    //if the characters doesn't matches
                {
                    c=0;        //count will be zero
                    break;      //loop breaks
                }
            }
        }
    }
    //if both the characters matches then count increments
    if(c!=0)    //so, count is non-zero, that shows substring is found.
    {
        printf("string2 %s is found in string1 %s\n", str2, str1);
    }
    //if both the characters doesn't matches then count equals to zero
    else        //that shows substring is not found
    {
        printf("string2 %s is not found in string1 %s\n", str2, str1);
    }
}



void myfunc_strup(char* str1, char* str2)
{
    int i=0,count1=0, count2=0;

    while(str1[i]!= '\0')   //str1 will check to null character
    {
        if((str1[i]>='A') && (str1[i]<='Z'))    //if this cond. true
        {
            count1++;       //then count increments
        }
        i++;
    }
    i=0;
    while(str2[i]!= '\0')   //str2 will check to null character
    {
        if((str2[i]>='A') && (str2[i]<='Z'))    //if this cond. true
        {
            count2++;       //then count increments
        }
        i++;
    }
    printf("Total no. of uppercase letters in string1 are: %d\n", count1);
    printf("Total no. of uppercase letters in string2 are: %d\n", count2);
}

void myfunc_strlow(char* str1, char* str2)
{
    int i=0,count1=0, count2=0;

    while(str1[i]!= '\0')   //str1 will check to null character
    {
        if((str1[i]>='a') && (str1[i]<='z'))    //if this cond. true
        {
            count1++;       //then count increments
        }
        i++;
    }
    i=0;
    while(str2[i]!= '\0')   //str2 will check to null character
    {
        if((str2[i]>='a') && (str2[i]<='z'))    //if this cond. true
        {
            count2++;       //then count increments
        }
        i++;
    }
    printf("Total no. of lowercase letters in string1 are: %d\n", count1);
    printf("Total no. of lowercase letters in string2 are: %d\n", count2);
}