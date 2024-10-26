//WAP to find the sum of 1/1! + 2/2! + 3/3! +….. n/n!
#include<stdio.h>
#include<conio.h>

void main() {
int num, i, j;
 float factorial, sum = 0;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
	printf("Factorial of a negative number doesn't exist.\n");
    } else {

	for (i = 1; i <= num; i++) {
	    factorial = 1;


	    for (j = 1; j <= i; j++) {
                factorial *= j;
	    }

           
            sum += (float)i / factorial;
        }

        
	printf("Sum of the series for %d terms is: %.2f\n", num, sum);
    }

    printf("Press any key to exit.");
    getch();  
}
