//WAP to find the sum of ‘n’ natural numbers using goto.
#include <stdio.h>
#include <conio.h>
void main() {
    int n, sum = 0, i = 1;
    clrscr();
    printf("Enter the value of n: ");
    scanf("%d", &n);
    start:
    if (i <= n) {
	sum += i;
	i++;
	goto start;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    printf("Press any key to exit.");
    getch();
}
