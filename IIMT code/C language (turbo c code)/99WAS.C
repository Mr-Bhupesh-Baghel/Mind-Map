//WAP to find the sum of the series x+x2+x3+….xn. Using user defined function with arguments and with return
#include <stdio.h>
#include <math.h>
#include <conio.h>
// Function to calculate the sum of the series
double calculateSeriesSum(int x, int n) {
    double sum = 0;int i;
    for ( i = 1; i <= n; i++) {
        sum += pow(x, i); // Add x^i to the sum
    }
    return sum;
}

void main() {
    int x, n;
    double result;
    clrscr();
    // Input the base and the number of terms
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Call the function and store the result
    result = calculateSeriesSum(x, n);

    // Output the result
    printf("The sum of the series is: %.2f\n", result);

    getch();
}
