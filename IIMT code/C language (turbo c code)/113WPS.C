//WAP to sum of even numbers and odd numbers among ‘n’ numbers using malloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main() {
    int *numbers, n, i;
    int sumEven = 0, sumOdd = 0;
     clrscr();
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically for 'n' integers
    numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sums of even and odd numbers
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    // Print the results
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    // Free the dynamically allocated memory
    free(numbers);

    getch();
}
