//WAP to addition of two matrices.
#include <stdio.h>
#include <conio.h>
#define s 5

void main() {
    int a[s][s], b[s][s], c[s][s];
    int i, j, k, r1, c1, r2, c2;

    clrscr();
    printf("Enter the order of the first matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r1, &c1);

    printf("Enter the order of the second matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r2, &c2);

    // Check if matrix addition is possible
    if (r1 != r2 || c1 != c2) {
	printf("Matrix addition not possible.\n");
	getch();
    exit();
    }

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix (%d * %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix (%d * %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize the resulting matrix to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix addition
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] + b[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("addition of two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%6d", c[i][j]);
        }
        printf("\n");
    }

    printf("Enter any key to exit.");
    getch();
}
