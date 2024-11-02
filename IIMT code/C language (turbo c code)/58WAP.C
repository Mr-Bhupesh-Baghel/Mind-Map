//WAP to find sum and average of ‘n’ numbers using 1D array.
#include<stdio.h>
#include<conio.h>
#define s 10
void main(){
int a[s] ,i,n,t=0;
float avg;  
clrscr();
printf("enter the no. of elements <= %d : \n",s);
scanf("%d",&n);
printf("Enter %d elemenls. \n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("given Array is: \n");
for(i=0;i<n;i++){
printf("%6d",a[i]);
t=t+a[i];
}
avg=(float)t/n;
printf("\n Total : %d\n average : %.2f",t,avg);
printf("\nEnter any key for exit.");
getch();
}