//WAP to sum of even numbers and odd numbers among ‘n’ numbers.
#include<stdio.h>
#include<conio.h>
#define s 10

void main() {
    int arr[s], i, n, e = 0, o = 0;

    clrscr();
    printf("Enter the number of elements (<= %d): \n", s);
    scanf("%d", &n);

    if (n > s) {
	printf("Number of elements should be less than or equal to %d.\n", s);
	getch();
	exit();
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    printf("Given Array is:\n");
    for (i = 0; i < n; i++) {
	printf("%6d", arr[i]);
    }

    for (i = 0; i < n; i++) {
	if (arr[i] % 2 == 0) {
	    e += arr[i];
	} else {
	    o += arr[i];
	}
    }

    printf("\nSum of even numbers = %d\n", e);
    printf("Sum of odd numbers = %d\n", o);
    printf("Enter any key for exit");
    getch();
}























































































