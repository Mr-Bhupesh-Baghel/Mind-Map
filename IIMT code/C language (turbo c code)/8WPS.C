//WAP to swap two variables without using third variable.	
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("Press any key to exit.");
    getch();
}
