//WAP to convert rupees in to paise.
#include <stdio.h>
#include <conio.h>
void main() {
    float rupees, paise;
    clrscr();
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);
    paise = rupees * 100;
    printf("Amount in paise: %.2f\n", paise);
    printf("Press any key to exit.");
    getch();
}
