//wap to find the area and perimeter of a rectangle
#include <stdio.h>
#include <conio.h>
void main() {
    float l, b, ar, P;
    clrscr();
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    ar = l * b;
    P = 2 * (l + b);
    printf("Area of the rectangle is: %.2f\n", ar);
    printf("Perimeter of the rectangle is: %.2f\n", P);
    printf("Press any key to exit.");
    getch();
}
