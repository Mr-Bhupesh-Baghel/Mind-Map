//wap to find the sum of individual digits of a five digit number using do wile loop
#include<stdio.h>
#include<conio.h>
void main() {
    int num, s = 0, d;
    clrscr();
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

     do{
        d = num % 10;  
        s += d;        
        num /= 10;     
    }while(num > 0);

    printf("Sum of digits: %d\n", s);

printf("\n press any key to exit");
getch();
}