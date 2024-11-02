//WAP to insert an element in exiting 1d array at specific position
//WAP to delete an element in exiting 1d array at specific position
#include<stdio.h>
#include<conio.h>
#define s 10
void main(){
int arr[s], n, pos, elem, i;
clrscr();
printf("enter the no. of elements <= %d : \n",s);
scanf("%d",&n);
printf("Enter %d elemenls. \n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("given Array is: \n");
for(i=0;i<n;i++){
printf("%6d",arr[i]);
}        printf("\n");
    // Insertion in the array
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
	arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++; // Increase the size of array

    // Display array after insertion
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion from the array
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the size of array

    // Display array after deletion
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

printf("Enter any key for exit.");

getch();
}

