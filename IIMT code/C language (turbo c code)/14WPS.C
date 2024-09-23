//WAP to find the greatest number between two numbers.
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a > b) {
        printf("%d is the greatest.\n", a);
    } else if (b > a) {
        printf("%d is the greatest.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }
    printf("Press any key to exit.");
    getch();
}
