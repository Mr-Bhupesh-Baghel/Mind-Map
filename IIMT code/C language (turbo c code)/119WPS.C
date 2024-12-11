//WAP to find the largest number and smallest number among ‘n’ numbers.
#include <stdio.h>
#include <conio.h>
void main() {
    int n, i, num;
    int largest, smallest;
    clrscr();
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Invalid input! Number of elements must be greater than 0.\n");
        return 1;
    }

    // Input the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;  // Initialize largest and smallest with the first number

    // Input the remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    // Output the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    getch();
}
