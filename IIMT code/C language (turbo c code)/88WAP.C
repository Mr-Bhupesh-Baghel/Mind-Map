//WAP to check if entered number is a perfect square. Using user defined function with arguments and with return
#include <stdio.h>
#include <math.h>
#include <conio.h>
// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int sqrtValue = sqrt(num);  // Calculate square root of the number
    return (sqrtValue * sqrtValue == num);  // Check if the square of sqrtValue equals num
}

void main(){
    int number;
    clrscr();
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the user-defined function
    if (isPerfectSquare(number)) {
	printf("%d is a perfect square.\n", number);
    } else {
	printf("%d is not a perfect square.\n", number);
    }


    getch();
}
