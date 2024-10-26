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

    if(f < 40 || c < 40 || b < 40 || h < 40 || m < 40) {
        printf("\nFail\n");
        grade = 'F';  } 
        else if (p >= 90) {
        grade = 'A';
    } else if (p >= 80) {
        grade = 'B';
    } else if (p >= 70) {
        grade = 'C';
    } else if (p >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    printf("Your grade is %c\n", grade);

    printf("Enter any key for Exit");
    getch();
}
