//WAP to find the greatest number between two numbers. Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>


void main() {
    // Function declaration
   void G();
    // Call the function
    G();
    getch();
}

// Function definition
void G() {
    int num1, num2;
     clrscr();
    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Find and print the greatest number
    if (num1 > num2) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
}
