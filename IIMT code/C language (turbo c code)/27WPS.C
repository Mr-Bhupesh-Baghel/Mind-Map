#include<stdio.h>
#include<conio.h>
void main() {
    int f, c, b, h, m, sum;
    float p;
    char grade;
      clrscr();
    printf("Enter your marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &f, &c, &b, &h, &m);
    sum = f + c + b + h + m;
    p = (sum * 100.0) / 500;
    printf("Your percentage is %.2f%%\n", p);
    grade = (p >= 90) ? 'A' :
	    (p >= 80) ? 'B' :
	    (p >= 70) ? 'C' :
	    (p >= 60) ? 'D' :
	    (p >= 50) ? 'E' : 'F';
    printf("Your grade is %c\n", grade);
printf("Enter any key for Exit");
getch();
}