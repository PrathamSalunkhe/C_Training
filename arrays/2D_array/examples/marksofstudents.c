//this program is to store the 3 subject's marks of 5 students
#include <stdio.h>
int main()
{
    int marks[5][3];
    int i,j,student=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the marks of student %d: \n", student);
            scanf("%d", &marks[i][j]);
        }
        student++;
    }

    student=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the marks of student %d are: %d\n",student,marks[i][j]);
        }
        student++;
    }
}