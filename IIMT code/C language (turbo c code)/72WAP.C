//WAP to find the sum and average of two numbers. Using user defined function with no arguments and no return
#include <stdio.h>
#include <conio.h>

void main(){
    void sa(); // Function declaration
    clrscr();
    sa(); // Function call
    getch();
}

void sa() { // Function definition
    int num1, num2, sum;
    float average;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating sum and average
    sum = num1 + num2;
    average = sum / 2.0;

    // Displaying the result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}