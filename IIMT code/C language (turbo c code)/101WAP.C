//WAP to find the sum of 1/1! + 2/2! + 3/3! +….. n/n! Using user defined function with arguments and with no return
#include <stdio.h>
#include <conio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1,i;
    for ( i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// User-defined function to calculate and print the sum
void calculateSum(int n) {
    double sum = 0.0; int i;
    for (    i = 1; i <= n; i++) {
        sum += (double)i / factorial(i);
    }
    printf("The sum of the series is: %.6lf\n", sum);
}

void main() {
    int n;
    clrscr();
    // Input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Function call
    calculateSum(n);

    getch();
}
