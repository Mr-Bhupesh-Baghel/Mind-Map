//WAP to find the reverse of the entered number.
#include<stdio.h>
#include<conio.h>

void main() {
    int num, rev = 0, a, n;
    clrscr();
    
    printf("Enter a 4 digite number ");
    scanf("%d", &num);

    n = num;

    while (num > 0) {
        a = num % 10;    
        rev = rev * 10 + a; 
        num = num / 10;     
    }

    printf("Reversed number of %d is = %d\n", n, rev);
    printf("Press any key to exit.");
    
    getch();
}
