/*WAP to print the pattern:
1
2 2
3  3 3
----------*/
#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,n;
clrscr();
printf("Enter a number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
  for(j=1;j<=i;j++){
  printf("%3d",i);
  }
  printf("\n");
}   printf("Enter any key for exit");
getch();
}


