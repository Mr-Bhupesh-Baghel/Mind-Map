/*WAP to print Pascal’s triangle:
               1
	        1  2  1
          1  3   3   1     
         ------------------
 ------------------------------*/
#include<stdio.h>
#include<conio.h>


void main() {
  int rows, i, j, num = 1;
     clrscr();
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for(j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print the numbers in the row
        for(j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
		num = 1; // First element in each row is 1
            } else {
                num = num * (i - j + 1) / j; // Calculate next element using the previous one
            }
            printf("%d ", num);
        }

        printf("\n");
    }
     printf("Enter any key for exit");
    getch();
    }