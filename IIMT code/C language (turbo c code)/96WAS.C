//WAP to check if entered number is palindrome or not. Using user defined function with arguments and with return
#include <stdio.h>
#include <conio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        return 1; // Return 1 if palindrome
    } else {
        return 0; // Return 0 if not palindrome
    }
}

void main() {
    int number;
clrscr();
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display result
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    getch();
}
