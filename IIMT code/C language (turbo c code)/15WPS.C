//WAP to find the largest of three numbers. 	
#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, c;
    clrscr();  
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c); 
    if (a > b && a > c) {
        printf("%d is the largest.\n", a);
    } else if (b > c) {
        printf("%d is the largest.\n", b);
    } else {
        printf("%d is the largest.\n", c);
    }
    printf("Press any key to exit.");
    getch();
}
