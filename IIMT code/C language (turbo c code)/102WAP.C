//WAP to generate a table of entered number. Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>

// Function to generate the multiplication table
void generateTable() {
    int num, i;
    clrscr();
    // Prompt the user to enter the number
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);
    
    // Generate the table
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

void main() {
    void generateTable();
    // Call the function
    generateTable();
    getch();
}
