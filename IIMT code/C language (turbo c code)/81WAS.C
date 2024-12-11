//WAP to find the sum of all individual digits of a five digit number. Using user defined function with  arguments and with return
#include <stdio.h>
#include <conio.h>
// Function to calculate the sum of the digits of a five-digit number
int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
	sum += number % 10;  // Add the last digit to sum
	number /= 10;        // Remove the last digit
    }
    return sum;
}

void main() {
    int num, result;
    clrscr();
    // Prompt user for a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Call the function and display the result
    result = sumOfDigits(num);
    printf("The sum of the digits of %d is: %d\n", num, result);

    getch();
}
