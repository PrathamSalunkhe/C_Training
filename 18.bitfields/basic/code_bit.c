#include <stdio.h>
#pragma pack(1)
struct {
    unsigned int isMale : 1;  // 1 bit for gender
    unsigned int age : 7;     // 7 bits for age (values from 0 to 127)
    unsigned int grade : 4;   // 4 bits for grade (values from 0 to 15)
} student;

int main() {
    student.isMale = 0;   // Setting the gender to female
    student.age = 21;     // Setting the age to 21
    student.grade = 10;   // Setting the grade to 10

    printf("Size of struct: %lu bytes\n", sizeof(student));
    printf("Gender: %s\n", student.isMale ? "Male" : "Female");
    printf("Age: %d\n", student.age);
    printf("Grade: %d\n", student.grade);

    return 0;
}
