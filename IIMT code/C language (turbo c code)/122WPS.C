//WAP to delete an element in exiting 1d array at specific position
#include <stdio.h>
#include <conio.h>
void deleteElement(int arr[], int *n, int pos) {int i;
    if (pos >= *n || pos < 0) {
	printf("Invalid position!\n");
	return;
    }

    // Shift elements left to fill the gap
    for (i = pos; i < (*n) - 1; i++) {
	arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*n)--;
}

void displayArray(int arr[], int n) {   int i;
    for (i = 0; i < n; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int n, pos;
    int arr[n]; // Declare an array of size n
    clrscr();

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);


    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Input position where element is to be deleted
    printf("Enter the position of the element to delete (0 to %d): ", n-1);
    scanf("%d", &pos);

    // Display the original array
    printf("Original array: ");
    displayArray(arr, n);

    // Call function to delete element
    deleteElement(arr, &n, pos);

    // Display the modified array
    printf("Array after deletion: ");
    displayArray(arr, n);

    getch();
}
