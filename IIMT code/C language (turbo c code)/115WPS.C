//WAP to delete an element in exiting 1d array at specific position using malloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  main() {
    int n, pos, i;
    int *arr;
    clrscr();
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
	printf("Memory allocation failed!\n");
	return 1;
    }

    // Input the array elements
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Input the position to delete
    printf("Enter the position of the element to delete (1-based index): ");
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n) {
	printf("Invalid position!\n");
	free(arr);
	return 1;
    }

    // Adjust position to 0-based index
    pos--;

    // Delete the element by shifting elements to the left
    for (i = pos; i < n - 1; i++) {
	arr[i] = arr[i + 1];
    }

    // Resize the array
    arr = (int *)realloc(arr, (n - 1) * sizeof(int));
    if (arr == NULL && n - 1 > 0) {
	printf("Memory reallocation failed!\n");
	return 1;
    }

    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n - 1; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    getch();
    return 0;
}