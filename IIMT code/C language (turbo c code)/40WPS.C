//WAP to generate all combinations of 1,2& 3.
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
    clrscr(); 
    	printf("all combinations of 1,2& 3.\n");
        
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
	      for (k = 1; k <= 3; k++)
	       {
             printf("%d %d %d  ",i,j, k);
           }
        }
    }

    printf("\n Enter any key for exit");

    getch();
    
}