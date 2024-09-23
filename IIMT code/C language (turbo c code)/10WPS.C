//WAP to convert kilometer into meter and centimeter
#include <stdio.h>
#include <conio.h>
void main() {
    float km, meters, centimeters;
    clrscr();
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    meters = km * 1000;
    centimeters = km * 100000;
    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in centimeters: %.2f\n", centimeters);
    printf("Press any key to exit.");
    getch();
}
