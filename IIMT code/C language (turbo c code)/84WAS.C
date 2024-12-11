//WAP to find the largest of three numbers. Using user defined function with  arguments and with  return
#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, num3, largest;
    // Function prototype
   int findLargest(int a, int b, int c);
    clrscr();

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the function and store the result in 'largest'
    largest = findLargest(num1, num2, num3);

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    getch();
}

// Function definition to find the largest of three numbers
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}