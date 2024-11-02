//WAP to find the transpose of a square matrix
#include <stdio.h>
#include <conio.h>
#define s 5

void main() {
    int a[s][s], transpose[s][s];
    int i, j, r, c;

    clrscr();
    printf("Enter the order of the matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r, &c);

    if (r != c) {
        printf("Error: The matrix must be square to find its transpose.\n");
        printf("Enter any key to exit.");
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

    // Calculate transpose
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%6d", transpose[i][j]);
        }
        printf("\n");
    }

    printf("Enter any key to exit.");
    getch();
}
