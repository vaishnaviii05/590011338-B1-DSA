//Write C program to define a union and structure to store employee information (name, employee ID, and salary).

#include <stdio.h>
#include <string.h>

struct Employeestruct
{
    char name[50];
    int empID;
    float salary;
};

union Employeeunion
{
    char name[50];
    int empID;
    float salary;
};

int main()
{
    //declaring and initializing the structure 
    struct Employeestruct empstruct;
    printf("Employee information using struct:\n");
    strncpy (empstruct.name, "Vaishnavi Singh", sizeof(empstruct));
    printf("Name: %s\n", empstruct.name);
    empstruct.empID = 590011338;
    printf("Employee ID: %d\n", empstruct.empID);
    empstruct.salary = 52000.00;
    printf("Salary: %.2f\n", empstruct.salary);

    printf("\n");

    //declaring and initializing the union
    union Employeeunion empunion;
    printf("Employee information using union:\n");
    strncpy (empunion.name, "Vaishnavi Singh", sizeof(empunion));
    printf("Name: %s\n", empunion.name);
    empunion.empID = 590011338;
    printf("Employee ID: %d\n", empunion.empID);
    empunion.salary = 52000.00;
    printf("Salary: %.2f\n", empunion.salary);


    printf("\n");
   
    //displaying memory sizes obtained by UNION and STRUCTURE
    printf("Memory obtained by Union: %lu bytes\n", sizeof (empunion));
    printf("Memory obtained by Structure: %lu bytes\n", sizeof (empstruct));

    return 0;
}