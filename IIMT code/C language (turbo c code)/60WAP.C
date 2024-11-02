//WAP to find reverse of 1D array.
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
    // Reverse the array
    printf("\nReversed Array: ");
    for (i = n - 1; i >= 0; i--) {
	printf("%d ", arr[i]);
    } printf("\n Enter any key for exit.");
getch();
}