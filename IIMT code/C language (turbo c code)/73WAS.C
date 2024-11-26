//WAP to find the area and perimeter of a rectangle Using user defined function with arguments and no return
#include <stdio.h>
#include <conio.h>

void main() {
    float a, b;
    // Function prototype
    void AP(float a, float b);
    clrscr();
    // Input length and breadth from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);

    // Call the function
    AP(a, b);

    getch();
}

// User-defined function to calculate area and perimeter
void AP(float length, float breadth) {
    float area, perimeter;

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
}