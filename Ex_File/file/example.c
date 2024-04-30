#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *filePointer = NULL;
    Employee emp;


    filePointer = fopen("employee_details.txt", "rb");

    if (filePointer == NULL) {
        printf("Error opening file.");
        return 1;
    }

    // emp.id = 1;
    // strcpy(emp.name, "John Doe");
    // emp.salary = 50000.0;

    // fwrite(&emp, sizeof(Employee), 1, filePointer);
    // printf("Data written to file successfully.\n");
    

    

    while(!feof(filePointer))
    {
        fread(&emp, sizeof(Employee), 1, filePointer);
        printf("%s", emp.name);
        printf("%d", emp.id);
        printf("%f", emp.salary);
    }


    fclose(filePointer);
    return 0;
}
