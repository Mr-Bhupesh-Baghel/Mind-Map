//WAP to find the sum of the series x+x^2+x^3+….x^n.
#include<stdio.h>
#include<conio.h>
void main(){ 
    
    int x, n, i;
    long int  sum = 0, term = 1;
    clrscr();

 
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) {
        term *= x;     
        sum += term;    
    }

   
    printf("The sum of the series x + x^2 + x^3 + ... + x^n is: %lld\n", sum);
    
   
    
   printf("Enter eny key for exit.");
    getch();
    }	
