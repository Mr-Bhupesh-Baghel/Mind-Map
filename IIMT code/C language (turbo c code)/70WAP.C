//WAP to sum of both diagonal elements of a matrix.
#include <stdio.h>
#include <conio.h>
#define s 5

void main() {
    int a[s][s], i, j, r, c, ps = 0, ss = 0;

    clrscr();
    printf("Enter the order of the matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r, &c);

    if (r != c) {
	printf("Matrix must be square for diagonal sums.\n");
	getch();
	exit();
    }

    printf("Enter the elements of the matrix (%d * %d):\n", r, c);
    for (i = 0; i < r; i++) {
	for (j = 0; j < c; j++) {
	    scanf("%d", &a[i][j]);
	}
    }

    printf("The given matrix is:\n");
    for (i = 0; i < r; i++) {
	for (j = 0; j < c; j++) {
	    printf("%6d", a[i][j]);
	}
	printf("\n");
    }

    // Summing the primary and secondary diagonals
    for (i = 0; i < r; i++) {
	ps += a[i][i];
	ss += a[i][r - 1 - i];
    }

    printf("The sum of primary diagonal elements is: %d\n", ps);
    printf("The sum of secondary diagonal elements is: %d\n", ss);
    printf("The sum of both diagonals is: %d\n", ps + ss);

    printf("Enter any key to exit.");
    getch();
}












