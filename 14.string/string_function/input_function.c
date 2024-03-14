//this program is to design our own input function to read the string (character array)

#include <stdio.h>

// getchar() -> this function is ue\sed to read one character at a time from the user input
// it returns an integer equivalent to the ASCII Code of the character

/// @brief this input function is to read the string 
/// @param str 
/// @param n 
/// @return no. of characters stored in the string

int input(char str[], int n)
{
    int ch, i=0;
    //this condition is to terminate the whole process when we reach '\n'
    while((ch = getchar())!= '\n')  
    {
        if(i<n) //this if construct is to discard the extra characters in char arr.
        {
            str[i++]= ch;  //store the characters in char array at the respective position  
        }
    }
    str[i] = '\0';  //at last store the null character

    return i;   //it will return the no. of characters stored in the string
}

int main()
{
    char str[100];  //declared the string of 100 characters

    int n = input(str, 100);    //n will stored the o/p returned by the function
    printf("%d %s\n", n, str);  //o/p will print here
    return 0;
}