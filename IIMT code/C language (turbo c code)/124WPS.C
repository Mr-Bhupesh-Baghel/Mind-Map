//WAP to read n employees record and print their record
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // For malloc and free

// Define a structure to hold employee details
struct Employee {
    int id;
    char name[50];
    float salary;
};

void main() {
    int n, i;
    struct Employee *employees; // Declare a pointer for dynamic memory allocation



    // Prompt the user to enter the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Allocate memory for 'n' employees
    employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (employees == NULL) { // Check if memory allocation is successful
	printf("Memory allocation failed!\n");

    }

    // Input employee details
    for (i = 0; i < n; i++) {
	printf("\nEnter details for employee %d\n", i + 1);
	printf("Enter Employee ID: ");
	scanf("%d", &employees[i].id);
	printf("Enter Employee Name: ");
	scanf(" %[^\n]", employees[i].name); // Correct way to read strings with spaces
	printf("Enter Employee Salary: ");
	scanf("%f", &employees[i].salary);
    }

    // Output the employee details
    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    for (i = 0; i < n; i++) {
	printf("%d\t%-10s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    // Free the allocated memory
    free(employees);

    getch();
}
