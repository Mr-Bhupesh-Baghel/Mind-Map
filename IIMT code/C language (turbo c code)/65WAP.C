//WAP to find sum of all elements of a matrix.
#include<stdio.h>
#include<conio.h>
#define s 5

void main() {
    int a[s][s], i, j, r, c, t = 0;

    clrscr();
    printf("Enter the order of the matrix (<= %d * %d): \n", s, s);
    scanf("%d%d", &r, &c);


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
            t = t + a[i][j];
        }
        printf("\n");
    }

    printf("The sum of all elements in the matrix is: %d\n", t);
    printf("Enter any key for exit");
    getch();
}
