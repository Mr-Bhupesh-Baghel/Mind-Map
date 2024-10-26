//WAP to convert binary to decimal.
#include<stdio.h>
#include<conio.h>
#include<math.h> 
void main(){
    int num, n, a, i = 0, s = 0;
     clrscr();
    printf("Enter a binary number to convert to decimal: ");
    scanf("%d", &num);

    n = num;
    while(n > 0)
    {
        a = n % 10;         
        s = s + a * pow(2, i); 
        n = n / 10;          
        i++;               
    }

    printf("\n%d in binary is %d in decimal.\n", num, s);
    printf("Enter eny key for exit.");
    getch();
}  