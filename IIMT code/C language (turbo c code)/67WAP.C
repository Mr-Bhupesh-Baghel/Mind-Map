//WAP to check if the square matrix is symmetric or not
#include<stdio.h>
#include<conio.h>
#define s 5
void main(){
    int n, i, j;
    int Sym = 1; // Assume the matrix is symmetric initially
     int matrix[s][s];  clrscr();
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++) {
	    printf("Element [%d][%d]: ", i, j);
	    scanf("%d", &matrix[i][j]);
	}
  }
printf("The given matrix is:\n");
    for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++) {
	    printf("%6d", matrix[i][j]);
	}
    printf("\n");
	}
    // Check symmetry
    for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++) {
	    if (matrix[i][j] != matrix[j][i]) {
		Sym = 0;
		break;
	    }
	}
	if (Sym == 0) break; // Break out of loop if not symmetric
    }

    // Output result
    if (Sym=1){
	printf("The matrix is symmetric.\n");
    } else {
	printf("The matrix is not symmetric.\n");
    }
    printf("Enter any key to exit.");
    getch();
	}