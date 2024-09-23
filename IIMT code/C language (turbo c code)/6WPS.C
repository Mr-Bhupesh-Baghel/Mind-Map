//Wap to find the area o f a right-angled triangle
#include <stdio.h>
#include <conio.h>
void main() {
    float b, h, a;
    clrscr();
    printf("This program calculates the area of a right-angled triangle.\n");
    printf("Enter the base: ");
    scanf("%f", &b);
    printf("Enter the height: ");
    scanf("%f", &h);
    a = 0.5 * b * h;
    printf("The area of the right-angled triangle is: %.2f\n", a);
    printf("Press any key to exit.");
    getch();
}
