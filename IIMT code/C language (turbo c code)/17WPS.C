//WAP to check if entered number is positive or negative.
#include <stdio.h>
#include <conio.h>
void main() {
    int num;
    clrscr();   
    printf("Enter a number: ");
    scanf("%d", &num); 
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }
    printf("Press any key to exit.");
    getch();
}
