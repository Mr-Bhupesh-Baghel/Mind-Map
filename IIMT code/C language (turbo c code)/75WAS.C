//WAP to find the area and circumference of a circle Using user defined function with  no arguments and no return
#include <stdio.h>
#include <conio.h>
#define PI 3.14159

void main() {
    // Function declaration
    void ac();
    clrscr();
    // Call the user-defined function
    ac();
    getch();
}

// Function definition: no arguments, no return
void ac() {
    float radius, area, circumference;

    // Prompt user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
}
