//WAP to read an employee record and print it
#include <stdio.h>
#include <conio.h>
// Define structure for Employee record
struct Employee {
    int empID;
    char empName[50];
    float salary;
};

void main() {
    struct Employee emp;  // Declare an Employee variable
    clrscr();
    // Read employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter Employee Name: ");
    getchar();  // To consume any extra newline character
    fgets(emp.empName, sizeof(emp.empName), stdin);  // To read the full name with spaces

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Print employee details
    printf("\nEmployee Record:\n");
    printf("Employee ID: %d\n", emp.empID);
    printf("Employee Name: %s", emp.empName);  // Name is printed without extra newline
    printf("Employee Salary: %.2f\n", emp.salary);

    getch();
}
