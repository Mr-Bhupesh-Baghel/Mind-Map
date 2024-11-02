//WAP to find row wise and column wise sum of elements of a matrix.
#include <stdio.h>
#include <conio.h>
#define s 5

void main() {
    int a[s][s], i, j, r, c;
    int rs, cs;

    clrscr();
    printf("Enter the order of the matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r, &c);

    if (r > s || c > s) {
        printf("Matrix size should be <= %d * %d.\n", s, s);
        getch();
        exit(0);
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

    // Calculating row-wise sum
    printf("Row-wise sum:\n");
    for (i = 0; i < r; i++) {
        rs = 0;
        for (j = 0; j < c; j++) {
            rs += a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rs);
    }

    // Calculating column-wise sum
    printf("Column-wise sum:\n");
    for (j = 0; j < c; j++) {
        cs = 0;
        for (i = 0; i < r; i++) {
            cs += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, cs);
    }

    printf("Enter any key to exit.");
    getch();
}
