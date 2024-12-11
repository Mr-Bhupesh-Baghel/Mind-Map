//WAP to print all prime numbers between 1 and 300. Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>

void main() {
    void  printPrimes();
    printPrimes();  // Call the function
    getch();
}

// Function to check if a number is prime
void printPrimes() {
    int i, j, isPrime;
    clrscr();
    printf("Prime numbers between 1 and 300 are:\n");
    for (i = 2; i <= 300; i++) {  // Start from 2 as 1 is not prime
        isPrime = 1;  // Assume number is prime
        for (j = 2; j <= i / 2; j++) {  // Check divisibility
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


