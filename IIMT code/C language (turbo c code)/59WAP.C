//WAP to find even numbers among ‘n’ numbers.
#include<stdio.h>
#include<conio.h>
#define s 10
void main(){
int arr[s] ,i, n;
clrscr();
printf("enter the no. of elements <= %d : \n",s);
scanf("%d",&n);
printf("Enter %d elemenls. \n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("given Array is: \n");
for(i=0;i<n;i++){
printf("%6d",arr[i]);
}  
for(i=0;i<n;i++){
if(arr[i]%2==0)
printf("\n %d is even number",arr[i]);

}
printf("\nEnter any key for exit.");
getch();
}