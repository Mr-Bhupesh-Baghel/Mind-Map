//WAP to print the sum of first ‘n’ natural numbers.
#include<stdio.h>
#include<conio.h>
void main(){
      int n, sum = 0,i;
      clrscr();
      
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    printf("Enter eny key for Exit.");
    getch();

}	
