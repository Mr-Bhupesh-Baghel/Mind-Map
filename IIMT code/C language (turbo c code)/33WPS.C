//Demo of break in loop.
#include<stdio.h>
#include<conio.h>
void main(){
 int i;
clrscr();
    
    for (i = 1; i <= 5; i++) {

	if (i == 3){
            printf("Breaking the loop at i = %d\n", i);
            break; 
	}

	printf("loop is working = %d\n", i);
    }

    printf("Loop ended.\n");
    printf("Enter eny key for Exit");
    getch();
}