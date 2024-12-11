//WAP to find the factorial of entered number. Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>

// Function to calculate factorial
void findFactorial() {
    int num, i;
    unsigned long long factorial = 1;
    clrscr();
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }
}

void main() {
    void findFactorial();
    // Call the function
    findFactorial();
    getch();
}
