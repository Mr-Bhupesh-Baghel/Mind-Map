//WAP to find the reverse of the entered number. Using user defined function with  arguments and with return
#include <stdio.h>
#include <conio.h>
// Function to reverse a number
int reverseNumber(int num) {
    int reverse = 0;
    while (num != 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    return reverse;
}

void main() {
    int number, reversed;
    clrscr();
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the function to reverse the number
    reversed = reverseNumber(number);
    
    // Display the reversed number
    printf("The reverse of %d is %d\n", number, reversed);
    
    getch();
}
