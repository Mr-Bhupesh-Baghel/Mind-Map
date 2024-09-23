//Wap to find the area and circumferecnce of circle
#include <stdio.h>
#include <conio.h>
void main() {
    float r, a, c, Pi = 3.14159;
    clrscr();
    printf("This program calculates the area and circumference of a circle.\n");
    printf("Enter the radius: ");
    scanf("%f", &r);
    a = Pi * r * r;
    c = 2 * Pi * r;
    printf("Area of the circle is: %.2f\n", a);
    printf("Circumference of the circle is: %.2f\n", c);
    printf("Press any key to exit.");
    getch();
}
