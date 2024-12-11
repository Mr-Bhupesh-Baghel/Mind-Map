//WAP to convert kilometer into meter and centimeter. Using user defined function with no  arguments and no return
#include <stdio.h>
#include <conio.h>

void main() {
    // Function declaration
void convertDistance();
    // Call the function
    convertDistance();
    getch();
}

// Function definition
void convertDistance() {
    float kilometers, meters, centimeters;
    clrscr();
    // Prompt user for input
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Conversion calculations
    meters = kilometers * 1000;
    centimeters = kilometers * 100000;

    // Display results
    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in centimeters: %.2f cm\n", centimeters);
}
