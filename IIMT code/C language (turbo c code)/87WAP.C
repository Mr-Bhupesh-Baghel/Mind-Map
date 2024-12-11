//WAP to check whether year is leap year or not. Using user defined function with   arguments and with  return
#include <stdio.h>
#include <conio.h>


void main(){
    int year;
    clrscr();
    // Taking year input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calling the function and checking the return value
    if (isLeapYear(year)) {
	printf("%d is a leap year.\n", year);
    } else {
	printf("%d is not a leap year.\n", year);
    }


    getch();
}

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
	return 1; // Return 1 if it is a leap year
    } else {
	return 0; // Return 0 if it is not a leap year
    }
}