//WAP to find sum and average of ‘n’ numbers using 1D array using malloc()
#include <stdio.h>
#include <stdlib.h> // For malloc() and free()
#include <conio.h>
void main() {
    int n, i;
    float sum = 0, average;
    int *arr;
    clrscr();
    // Prompt user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum
    }

    // Calculate average
    average = sum / n;

    // Output sum and average
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    // Free allocated memory
    free(arr);

    getch();
}
