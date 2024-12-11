//WAP to find reverse of 1D array using malloc()
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int  main() {
    int n, i;
    int *arr, *revArr;
    clrscr();
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    revArr = (int *)malloc(n * sizeof(int));

    if (arr == NULL || revArr == NULL) {
	printf("Memory allocation failed!\n");
	return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (i = 0; i < n; i++) {
	revArr[i] = arr[n - i - 1];
    }

    // Output the reversed array
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
	printf("%d ", revArr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    free(revArr);

    getch();
    return 0;
}