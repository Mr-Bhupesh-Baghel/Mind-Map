//WAP to check if the number is Prime. Using user defined function with arguments and with return
#include <stdio.h>
#include <conio.h>

// Function to check if a number is prime
int isPrime(int num) {int i;
    if (num <= 1) {
	return 0; // Not prime
    }
    for (i = 2; i <= num / 2; i++) {
	if (num % i == 0) {
	    return 0; // Not prime
	}
    }
    return 1; // Prime
}

void main() {
    int number;

    clrscr(); // Clear screen (specific to Turbo C)

    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the function and check the result
    if (isPrime(number)) {
        printf("%d is a Prime Number.\n", number);
    } else {
        printf("%d is Not a Prime Number.\n", number);
    }
    
    getch(); // Wait for a key press before closing
}
