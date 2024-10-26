//WAP to find the sum of all odd numbers from 1 to 200 without using if.	
#include<stdio.h>
#include<conio.h>
void main(){

    int sum = 0,i;
clrscr();

    for ( i = 1; i <= 200; i += 2) {
        sum += i;
    }

    printf("The sum of all odd numbers from 1 to 200 is: %d\n", sum);
    
    
   
    printf("Press any key to exit");
    

    getch();
    }