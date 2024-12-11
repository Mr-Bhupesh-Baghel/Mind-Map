//WAP to convert Celsius into Fahrenheit Using user defined function with  no arguments and no return
#include <stdio.h>
#include <conio.h>

void main() {
    void T();  // Function declaration
    T();  // Function call
    getch();
}

// Function definition
void T() {
    float celsius, fahrenheit;
    clrscr();
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}
