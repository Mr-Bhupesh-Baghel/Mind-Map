//Demo of continue in loop.
#include<stdio.h>
#include<conio.h>
void main(){
   
    int i;
clrscr();
   
    for (i = 1; i <=5 ; i++) {

        if (i == 3) {
            printf("now loop is continue, and Skipping i = %d\n", i);
	continue;
	}
	printf("loop is workinig %d\n", i);

    } 

    printf("Loop finished.\n");
    printf("Enter eny key for Exit");
    getch();
}