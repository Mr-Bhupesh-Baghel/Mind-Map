//WAP to add the even digits and odd digits of a number separately.
#include <stdio.h>
#include<conio.h>

void main() {


    int num, d;
    int e = 0, o = 0;
    clrscr();
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop through each digit
    while (num > 0) {
	d = num % 10;  // Get the last digit

	// Check if the digit is even or odd and add it to the corresponding sum
	if (d % 2 == 0) {
	    e += d;
	} else {
	    o += d;
	}

	num /= 10;  // Remove the last digit
    }

    // Print the results
    printf("Sum of even digits: %d\n", e);
    printf("Sum of odd digits: %d\n", o);


     printf("Enter any key to exit: ");




    getch();
}
