//WAP to find reverse of 1D array.
#include <stdio.h>
#include <conio.h>
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1, temp;

    while (start < end) {
        // Swap the elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start forward and end backward
        start++;
        end--;
    }
}

void main() {
    int n, i; int arr[n];
    clrscr();
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);



    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverseArray(arr, n);

    // Print the reversed array
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch();
}
