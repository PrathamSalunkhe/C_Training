//this program is to return the structure from the function

#include <stdio.h>

struct point
{
    int x;
    int y;
};
/*@brief operating the values of x and y
  @param p
  @return structure point p */
struct point edit(struct point p)
{
    (p.x)++;        //p.x = p.x + 1 = 4+1 = 5
    p.y = p.y + 5;  //p.y = p.y + 5 = 5+5 = 10
    return p;       //return structure containing values of p.x and p.y
}

/// @brief printing the value of x and y
/// @param p 
void print(struct point p)
{
    printf("%d %d\n", p.x, p.y);    
}
 
int main()
{
    struct point p1 = {4, 5};
    p1 = edit(p1);  //calling the edit function with passing the structure
    print(p1);      //calling the print function with passing the structure
    return 0;
}