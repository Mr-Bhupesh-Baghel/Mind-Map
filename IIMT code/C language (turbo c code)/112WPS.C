//WAP to find the largest number and smallest number among ‘n’ numbers using calloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  main() {
    int n, i;
    float *numbers, largest, smallest;
    clrscr();
    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for 'n' elements using calloc
    numbers = (float *)calloc(n, sizeof(float));
    if (numbers == NULL) {
	printf("Memory allocation failed!\n");
	return 1; // Exit if memory allocation fails
    }

    // Input the numbers
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
	scanf("%f", &numbers[i]);
    }

    // Initialize largest and smallest
    largest = smallest = numbers[0];

    // Find the largest and smallest numbers
    for (i = 1; i < n; i++) {
	if (numbers[i] > largest) {
	    largest = numbers[i];
	}
	if (numbers[i] < smallest) {
	    smallest = numbers[i];
	}
    }

    // Output the results
    printf("Largest number: %.2f\n", largest);
    printf("Smallest number: %.2f\n", smallest);

    // Free the allocated memory
    free(numbers);

    getch();
    return 0;
}