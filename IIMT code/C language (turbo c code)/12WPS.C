//WAP to find the sum of all individual digits of a five digit number.
#include <stdio.h>
#include <conio.h>
void main() {
    int num, digit, sum = 0;
    clrscr();
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Press any key to exit.");
    getch();
}
