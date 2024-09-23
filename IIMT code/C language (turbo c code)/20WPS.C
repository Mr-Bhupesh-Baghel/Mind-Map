//WAP to find the largest of three umbers using nested if.
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, c;
    clrscr();
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b && a>c)

	    printf("%d is the largest.\n", a);
    if (b>a&&b>c)
	    printf("%d is the largest.\n", c);


	if (b > c&&b>a)
	    printf("%d is the largest.\n", b);
	if (c>a&&c>b)
	    printf("%d is the largest.\n", c);
if(a==b&&b==c)
printf("%d = %d = %d, all calue is equal",a,b,c);
    printf("Press any key to exit.");
    getch();
}
