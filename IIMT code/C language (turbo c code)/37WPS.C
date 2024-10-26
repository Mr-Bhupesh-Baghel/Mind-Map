//WAP to print the Fibonacci series up to ‘n’ terms
#include<stdio.h>
#include<conio.h>
void main(){
      int t1 = 0, t2 = 1, nextTerm, n, i;
      clrscr();
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d ",t1, t2);

    for (i=3 ;i <= n; i++) {
	nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf(" Enter eny key for Exit");
    getch();
}
