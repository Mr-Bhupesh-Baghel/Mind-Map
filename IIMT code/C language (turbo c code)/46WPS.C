//WAP to find the sum of all even numbers from 2 to 400 without using if.
#include <stdio.h>
#include <conio.h>

void main() {
long int sum =0,i;
    clrscr();
       for ( i = 2; i <= 400; i=i+ 2) {
	sum =sum+i;

}
    printf("The sum of all even numbers from 2 to 400 is:%ld\n", sum); // Correct placement of printf
    printf("Press any key to exit");
    getch();
}
