//WAP to check if the number is Prime.
#include<stdio.h>
#include<conio.h> 
void main()
{
    int num, i;
      clrscr();
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    
    i = 2; 

    while (i < num)
    {
        if (num % i == 0)
            break; 
        i++; 
    }

    if (i == num) 
        printf("\n%d is a prime number.", num);
    else
        printf("\n%d is not a prime number.", num);
    printf("Enter eny key for Exit");
     getch(); 
}
