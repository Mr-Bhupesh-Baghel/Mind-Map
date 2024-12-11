//WAP to print Fibonacci series up to n terms using recursion
#include <stdio.h>
#include <conio.h> // Required for clrscr() and getch()

// Function to calculate the Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: fibonacci(0) = 0, fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}

void main() {
    int n, i;

    clrscr(); // Clear screen, don't forget semicolon.
    
    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: ", n);

    // Print Fibonacci series using recursion
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    getch(); // Wait for user input before exiting the program
}
