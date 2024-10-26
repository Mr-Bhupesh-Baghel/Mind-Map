//WAP to print all prime numbers between 1 and 300.
#include<stdio.h>
#include<conio.h> 
void main()
{
     int num, i;

    clrscr(); 

    printf("All prime numbers between 1 and 300:\n");

    for(num = 2; num <= 300; num++) 
    {
        i = 2; 

    while (i < num)
    {
        if (num % i == 0)
            break; 
        i++; 
    }

    if (i == num) 
	printf("%6d",num);
    }
    printf("\nEnter eny key for Exit");
     getch(); 
}
