//WAP to convert decimal to binary.
#include<stdio.h>
#include<conio.h>
#include<math.h> 
void main(){
    int num, n, a, i = 0, s = 0;
     clrscr();
    printf("Enter a decimal number to convert to binary: ");
    scanf("%d", &num);

    n = num;
    while(n > 0)
    {
        a = n % 2;         
        s = s + a * pow(10, i); 
        n = n / 2;          
        i++;               
    }

    printf("\n%d in decimal is %d in binary.\n", num, s);

    printf("Enter eny key for exit.");
    getch();
}  