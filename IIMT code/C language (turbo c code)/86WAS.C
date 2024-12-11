//WAP to check if entered number is positive or negative. Using user defined function with  arguments and with  return
#include <stdio.h>
#include <conio.h>

void main() {
    int number;
    clrscr();
    // User input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the function and check the result
    if (checkNumber(number)) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    getch();
}
 // Function to check if the number is positive or negative
int checkNumber(int num) {
    if (num >= 0) {
        return 1;  // Return 1 if the number is positive
    } else {
        return 0;  // Return 0 if the number is negative
    }
}
