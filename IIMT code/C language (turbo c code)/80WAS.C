//WAP to find the sum of first and last digit of a four digit number. Using user defined function with  arguments and no return
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of first and last digits
void sumFirstLast(int num) {
    int firstDigit, lastDigit, sum;
    clrscr();
    // Extract the last digit
    lastDigit = num % 10;

    // Extract the first digit
    firstDigit = num / 1000;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    // Print the result
    printf("The sum of the first and last digits is: %d\n", sum);
}

void main() {
    int number;
    clrscr();
    // Prompt user for input
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Ensure it's a valid four-digit number
    if (number >= 1000 && number <= 9999) {
        sumFirstLast(number); // Call the function
    } else {
        printf("Invalid input! Please enter a four-digit number.\n");
    }

    getch();;
}
