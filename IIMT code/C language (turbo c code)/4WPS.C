//wap to find the area and perimeter of a squar
#include <stdio.h>
#include <conio.h>
void main() {
    float s, ar, P;
    clrscr();
    printf("Enter the side of the square: ");
    scanf("%f", &s);
    ar = s * s;
    P = 4 * s;
    printf("Area of the square is: %.2f\n", ar);
    printf("Perimeter of the square is: %.2f\n", P);
    printf("Press any key to exit.");
    getch();
}
