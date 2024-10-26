//wap to find the sum of individual digits of a five digit number using for loop
#include <stdio.h>
#include <conio.h>
void main() {
 int num, sum = 0, d,i;
    clrscr();
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++) {
	d = num % 10;
	sum = sum + d;
	num = num / 10;
    }

    printf("The sum of the digits is: %d\n", sum);
	printf("\n press any key to exit");
    getch();
}
