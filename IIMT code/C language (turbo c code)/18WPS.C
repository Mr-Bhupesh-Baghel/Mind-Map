//WAP to check whether year is leap year or not.	
#include <stdio.h>
#include <conio.h>
void main() {
    int year;
    clrscr(); 
    printf("Enter a year: ");
    scanf("%d", &year);   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }  
    printf("Press any key to exit.");
    getch();
}
