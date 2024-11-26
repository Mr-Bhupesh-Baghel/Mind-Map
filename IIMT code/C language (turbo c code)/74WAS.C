//WAP to find the area and perimeter of a square Using user defined function with  arguments and with return
#include <stdio.h>
#include <conio.h>

void main() {
    int side, area, perimeter;
    clrscr();
    // Input the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    // Call the user-defined functions
    area = A(side);
    perimeter = P(side);

    // Output the results
    printf("Area of the square: %d\n", area);
    printf("Perimeter of the square: %d\n", perimeter);

    getch();
}

// Function to calculate the area of a square
int A(int side) {
    return side * side;
}

// Function to calculate the perimeter of a square
int P(int side) {
    return 4 * side;
}
