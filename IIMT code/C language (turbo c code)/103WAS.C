//WAP to find the factorial of a number using recursion
#include <stdio.h>
#include <conio.h>
// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case: factorial of 0 or 1 is 1
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
void main() {
    int num;
    clrscr();
    // Input from user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d.\n", num, factorial(num));
    }
    
    getch();
}
