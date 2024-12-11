//WAP to find x to the power y using recursion
#include <stdio.h>
#include <conio.h>
// Function to calculate x^y using recursion
int power(int x, int y) {
    // Base case: x^0 is always 1
    if (y == 0)
        return 1;
    // Recursive case: x^y = x * x^(y-1)
    else
        return x * power(x, y - 1);
}

void main() {
    int x, y;
    clrscr();
    // Taking input for base and exponent
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Call the power function and display the result
    printf("%d raised to the power of %d is %d\n", x, y, power(x, y));

getch();
}
