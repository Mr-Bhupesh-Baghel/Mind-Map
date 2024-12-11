//WAP to print the Fibonacci series up to ‘n’ terms Using user defined function with  arguments and with no return
#include <stdio.h>
#include <conio.h>
// Function to print Fibonacci series
void printFibonacci(int n) {
    int a = 0, b = 1, next,i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for ( i = 1; i <= n; i++) {
	printf("%d ", a);
	next = a + b;
	a = b;
	b = next;
    }
}

void main() {
    int n;
    clrscr();

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    getch();
}
