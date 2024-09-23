//WAP to find large number of two numbers using conditional operator.	
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b,l;
    clrscr();
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    l = (a > b) ? a : b;

    printf("The largest number is: %d\n", l);
    
    printf("Press any key to exit.");
    getch();
}
