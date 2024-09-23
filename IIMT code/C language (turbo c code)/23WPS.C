//WAP to display the number of days in entered month.
#include<stdio.h>
#include<conio.h>
void main(){
    int m;
    clrscr();
    printf("Enter the month Number ");
    scanf("%d",&m);
    switch (m){
	case 4: case 6: case 9: case 11:
	printf("The nmuber of days is 30\n");
	break;
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	printf("The nmuber of days is 31\n");
	break;
	case 2:
	printf("The nmuber of days is 28 or 29\n");
	break;
	default:
	printf("invalid manth number\n");
    }
    printf("press any key for Exit.");
    getch();

}