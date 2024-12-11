//WAP to check if entered number is even or odd. Using user defined function with  arguments and with no return
#include <stdio.h>
#include <conio.h>

void main() {
    int number;
    // User-defined function declaration
    void eo(int num);  
    clrscr();
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Function call
    eo(number);
    
    getch();
}

// User-defined function definition
void eo(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
