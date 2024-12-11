//WAP to insert an element in exiting 1d array at specific position
#include <stdio.h>
#include <conio.h>
void insertElement(int arr[], int *n, int pos, int element) {
    // Shift elements to the right to make space for the new element
    for (int i = *n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element at the specified position
    arr[pos] = element;
    // Increment the size of the array
    (*n)++;
}

void main() {
    int arr[100], n, pos, element;
    clrscr();
    // Input number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the element to be inserted
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Validate the position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Call the function to insert the element
    insertElement(arr, &n, pos, element);

    // Display the array after insertion
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
}
