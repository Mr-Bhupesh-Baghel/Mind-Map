//WAP to swap the values of two variable using call by reference
#include <stdio.h>
#include <conio.h>
// Function to swap two variables using call by reference
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main() {
    int a, b;
     clrscr();
    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Print original values
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    getch();
}
