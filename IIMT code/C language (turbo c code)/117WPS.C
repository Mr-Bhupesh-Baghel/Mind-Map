//WAP to find even numbers among ‘n’ numbers.
#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, number;

    // Asking user for the count of numbers
    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    // Declare an array to store the numbers
    int numbers[n];

    // Input the numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Print even numbers
    printf("Even numbers are: ");
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
    getch();
}
