/*WAP to print the pattern:
         ……………
       1 2 3 4
         1 2 3
           1 2
             1     */
#include<stdio.h>
#include<conio.h>

void main(){
    int i, j, k, n, m;

    clrscr();  

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    m = n;  // Initialize m to n

    for(i = 1; i <= n; i++){
        // Print leading spaces
        for(k = 1; k < i; k++){
            printf("  ");
        }
        // Print the numbers
        for(j = 1; j <= m; j++){
            printf("%d ", j);
        }
        m--;  // Decrease m after each row
        printf("\n");  // Move to the next line
    }
       printf("Enter any key for exit");
    getch();
    }

