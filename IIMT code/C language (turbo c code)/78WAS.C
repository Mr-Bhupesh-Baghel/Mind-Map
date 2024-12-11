//WAP to convert rupees in to paise. Using user defined function with  arguments and with return
#include <stdio.h>
#include <conio.h>
// Function to convert rupees to paise
int convertToPaise(int rupees) {
    return rupees * 100;  // 1 Rupee = 100 Paise
}

void main() {
    int rupees, paise;
    clrscr();
    // Taking input from the user
    printf("Enter the amount in rupees: ");
    scanf("%d", &rupees);

    // Calling the function
    paise = convertToPaise(rupees);

    // Displaying the result
    printf("%d rupees is equal to %d paise.\n", rupees, paise);

    getch();
}
