//WAP to find ‘x’ raised to the power ‘y’ i.e., x^y
#include<stdio.h>
#include<conio.h>
void main(){
      int x, y,i;
    long int  result = 1;
    clrscr();
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++) {
	result *= x;
    }
    printf("%d raised to the power %d is: %ld\n", x, y, result);

    printf("Enter eny key for exit.");

    getch();
    }