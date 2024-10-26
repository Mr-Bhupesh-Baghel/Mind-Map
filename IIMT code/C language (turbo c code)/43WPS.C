//WAP to find the factorial of entered number.
#include<stdio.h>
#include<conio.h>
void main(){
  
    int num, i;
    long int  factorial = 1;
     clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
	printf("Factorial of a negative number doesn't exist.\n");
    } else {

	for(i = 1; i <= num; i++) {
	    factorial *= i;
	}
	printf("Factorial of %d = %ld \n", num, factorial);
    }

     printf("Enter eny key for exit.");


    getch();
    }