//WAP to find the sum of individual digits of a five digit number Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>


void main(){
    void sumOfDigits();
    sumOfDigits();  // Call the function

    getch();
}

// User-defined function with no arguments and no return value
void sumOfDigits() {
    int num, sum = 0, digit;
    clrscr();
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Extract and sum each digit
    while (num != 0) {
        digit = num % 10;  // Get the last digit
        sum += digit;      // Add the digit to sum
        num /= 10;         // Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);
}
