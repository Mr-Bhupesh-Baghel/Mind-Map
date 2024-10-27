/*WAP to print the pattern:
                 1
               2 1
             3 2 1
              …………
            ………………

*/
 #include<stdio.h>
#include<conio.h>

void main(){
    int i, j, k, n;

    clrscr();  

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        // Print leading spaces
        for(k = 1; k <= (n - i); k++){
            printf("  ");
        }

        // Print numbers in descending order
        for(j = i; j >= 1; j--){
            printf("%d ", j);
        }
        
        printf("\n");  // Move to the next line
    }
      printf("Enter any key for exit");
    getch();
}
