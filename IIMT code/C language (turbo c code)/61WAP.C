//WAP to find the largest number and smallest number among ‘n’ numbers
#include<stdio.h>
#include<conio.h>
#define s 10
void main(){
int arr[s] ,i, n;
int max, min;
clrscr();
printf("Enter the no. of elements <= %d : \n",s);
scanf("%d",&n);
printf("Enter %d elemenls. \n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("given Array is: \n");
for(i=0;i<n;i++){
printf("%6d",arr[i]);
}
 // Initialize max and min with the first element
    max = min = arr[0];
    
    // Traverse the array to find the max and min values
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print the largest and smallest numbers
    printf("\nLargest number = %d\n", max);
    printf("Smallest number = %d\n", min);
printf("Enter any key for exit.");
getch();
}