//WAP to swap two numbers using third variable.	
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, temp;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("Press any key to exit.");
    getch();
}
