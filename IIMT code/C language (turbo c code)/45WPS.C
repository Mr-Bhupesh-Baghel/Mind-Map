//WAP to generate a table of entered number.
#include<stdio.h>
#include<conio.h>

void main() {
    int t, i, r;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &t);

    for (i = 1; i <= 10; i++) {
	r = t * i;
	printf("%d * %d = %d\n", t, i, r);
    }

    printf("Press any key to exit");
    getch();
}

