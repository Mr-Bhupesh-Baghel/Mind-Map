//WAP to calculate HCF and LCM of given number.
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, num1, num2, hcf, lcm;
    clrscr();
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Store the original values of a and b
    a = num1;
    b = num2;

    // Calculate HCF using the Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Calculate LCM
    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    printf("Enter any key for exit");
    getch();
}
