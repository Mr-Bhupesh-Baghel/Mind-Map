//WAP to find ‘x’ raised to the power ‘y’ i.e., xy. Using user defined function with  arguments and with return
#include <stdio.h>
#include <conio.h>
// Function to calculate x raised to the power y
double power(double base, int exponent) {
    double result = 1.0;

    // If exponent is positive
    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    // If exponent is zero, result is 1
    else if (exponent == 0) {
        result = 1.0;
    }
    // If exponent is negative
    else {
        for (int i = 0; i < -exponent; i++) {
            result *= base;
        }
        result = 1.0 / result;
    }

    return result;
}

void main() {
    double x;
    int y;
clrscr();
    // Input from the user
    printf("Enter the base (x): ");
    scanf("%lf", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Call the power function
    double result = power(x, y);

    // Print the result
    printf("%.2lf raised to the power %d is %.2lf\n", x, y, result);

    getch();
}
