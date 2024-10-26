//WAP to check if entered number is palindrome or not.
#include<stdio.h>
#include<conio.h>
void main(){
 int num, orig, rev = 0, rem;
    clrscr();
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    
    orig = num;
    
    
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    

    if (orig == rev) {
        printf("%d is a palindrome.\n", orig);
    } else {
        printf("%d is not a palindrome.\n", orig);
    }  printf("Enter any key for exit.");
    getch();
    }