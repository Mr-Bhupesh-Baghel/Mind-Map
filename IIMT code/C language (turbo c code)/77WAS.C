//WAP to convert kilometer into meter and centimeter. Using user defined function with no  arguments and no return
#include <stdio.h>
#include <conio.h>

void main() {
   void mc();
    mc();
    getch();
}
// Function to convert kilometers to meters and centimeters
void mc() {
    float kilometers, meters, centimeters;
    clrscr();
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;         // 1 km = 1000 meters
    centimeters = kilometers * 100000;  // 1 km = 100000 centimeters

    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in centimeters: %.2f cm\n", centimeters);
}


