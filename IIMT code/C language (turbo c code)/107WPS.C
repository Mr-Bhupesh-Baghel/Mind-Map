//WAP to swap the values of two variable using call by value
#include <stdio.h>
#include <conio.h>
// Function to swap two variables using call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

void main() {
    int x, y;
    clrscr();
    // Input values for x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call swap function
    swap(x, y);

    // Print values after swap function
    printf("After swap (in main): x = %d, y = %d\n", x, y);

    getch();
}
