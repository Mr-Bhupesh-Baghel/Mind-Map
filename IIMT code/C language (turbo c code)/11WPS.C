//WAP to find the sum of first and last digit of a four digit number.	
#include <stdio.h>
#include <conio.h>
void main() {
    int num, first_digit, last_digit, sum;
    clrscr();
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    first_digit = num / 1000;
    sum = first_digit + last_digit;
    printf("The sum of the first and last digits is: %d\n", sum);
    printf("Press any key to exit.");
    getch();
}
