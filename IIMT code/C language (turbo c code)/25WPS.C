//WAP to find the large number of three numbers using conditional operator.
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c,l;
    clrscr();
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
	l= a>b ? (a>c ? a:c):( b>c ? b:c);
   //= (a > b && a > c) ? a : (b > c ? b : c);

    printf("The largest number is: %d\n", l);
    
    printf("Press any key to exit.");
    getch();
}
