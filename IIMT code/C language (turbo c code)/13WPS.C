//WAP to convert Celsius into Fahrenheit
#include <stdio.h>
#include <conio.h>
void main() {
    float celsius, fahrenheit;
    clrscr();
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Press any key to exit.");
    getch();
}
