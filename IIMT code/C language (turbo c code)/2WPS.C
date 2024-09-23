//wap to find the sum and average of two numbers.
#include<stdio.h>
#include<conio.h>
void main(){
int x,y,s;
float avg;
clrscr();
printf("\nEnter your first Number: ");
scanf("%d",&x);
printf("\nEnter your second Number: ");
scanf("%d",&y);
s=x+y;
avg=s/2.0;
printf("%d is the sum of Two numbers\n",s);
printf("%.2f is the average\n",avg);
printf("My press any key to exit.");
getch();
}