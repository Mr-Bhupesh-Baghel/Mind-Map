//WAP to insert an element in exiting 1d array at specific position using calloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  main() {
    int *arr, *newArr;
    int n, pos, element, i;
    clrscr();
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
	printf("Memory allocation failed!");
	return 1;
    }

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Input the position and the element to be inserted
    printf("Enter the position where you want to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
	printf("Invalid position!");
	free(arr);
	return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Allocate memory for the new array with size n+1
    newArr = (int *)calloc(n + 1, sizeof(int));

    if (newArr == NULL) {
	printf("Memory allocation failed!");
	free(arr);
	return 1;
    }

    // Copy elements to the new array with the new element inserted
    for (i = 0; i < pos - 1; i++) {
	newArr[i] = arr[i];
    }
    newArr[pos - 1] = element;
    for (i = pos; i <= n; i++) {
	newArr[i] = arr[i - 1];
    }

    // Free the memory of the old array
    free(arr);

    // Print the new array
    printf("The new array is:\n");
    for (i = 0; i <= n; i++) {
	printf("%d ", newArr[i]);
    }
    printf("\n");

    // Free the memory of the new array
    free(newArr);

    getch();
    return 0;
}