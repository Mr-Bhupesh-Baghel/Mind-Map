//WAP to check if entered number is even or odd.
#include <stdio.h>
#include <conio.h>
void main() {
    int num;
    clrscr();   
    printf("Enter a number: ");
    scanf("%d", &num);  
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    } 
    printf("Press any key to exit.");
    getch();
}
