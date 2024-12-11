//WAP to print the sum of first ‘n’ natural numbers. Using user defined function with   arguments and with return
#include <stdio.h>
#include <conio.h>



void main() {
    int n, sum;
      // Function prototype
int sumOfNaturalNumbers(int n);
    clrscr(); // Clear the screen (specific to Turbo C)
    
    // Prompt the user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function and store the result
    sum = sumOfNaturalNumbers(n);

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    getch(); // Wait for a key press (specific to Turbo C)
}

// Function to calculate the sum of the first n natural numbers
int sumOfNaturalNumbers(int n) {
    int sum = 0,i;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
