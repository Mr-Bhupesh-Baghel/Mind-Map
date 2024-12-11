//WAP to find even numbers among ‘n’ numbers using calloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int n, i, *numbers, *evenNumbers, evenCount = 0, j = 0;

    clrscr(); // Clear the screen for Turbo C

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the numbers using calloc
    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Count even numbers
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    // Allocate memory for even numbers using calloc
    evenNumbers = (int *)calloc(evenCount, sizeof(int));
    if (evenNumbers == NULL) {
        printf("Memory allocation failed!\n");
        free(numbers); // Free previously allocated memory
        return 1;
    }

    // Store even numbers
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[j++] = numbers[i];
        }
    }

    // Output the even numbers
    printf("Even numbers are:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    // Free allocated memory
    free(numbers);
    free(evenNumbers);

    getch(); // Wait for user input before exiting
    return 0;
}
