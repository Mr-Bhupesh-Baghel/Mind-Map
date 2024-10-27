//WAP to find sum and average of ‘n’ random numbers.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int n, i, sum = 0;
    float average;
    clrscr();


    // Input: number of random numbers
    printf("Enter the number for random numbers: ");
    scanf("%d", &n);

    printf("Random numbers: ");

    // Loop to generate random numbers and calculate the sum
    for (i = 0; i < n; i++) {
	int randomNumber = rand() % 100; // Generates random numbers between 0 and 99
	printf("%d ", randomNumber);
	sum += randomNumber;
    }

    // Calculate average
    average = (float)sum / n;

    // Output: sum and average
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);
    printf("Enter a key for Exit.");
    getch();
    }