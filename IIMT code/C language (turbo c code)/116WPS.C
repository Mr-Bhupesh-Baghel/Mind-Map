//WAP to find sum and average of ‘n’ numbers using 1D array.
#include <stdio.h>
#include <conio.h>

void main() {
    int n, i;
    float sum = 0, average;

    // Declare array with a fixed size
    float numbers[100]; // Assuming a maximum of 100 elements

    // Clear the screen (for Turbo C)
    clrscr();

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 100) {
	printf("Number of elements exceeds the limit of 100.\n");
	getch();
	return;
    }

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
	printf("Element %d: ", i + 1);
	scanf("%f", &numbers[i]);
        sum += numbers[i]; // Calculate sum
    }

    // Calculate average
    average = sum / n;

    // Display sum and average
    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    // Wait for a key press before exiting (for Turbo C)
    getch();
}

