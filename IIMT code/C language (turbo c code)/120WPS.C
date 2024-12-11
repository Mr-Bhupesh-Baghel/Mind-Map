//WAP to sum of even numbers and odd numbers among ‘n’ numbers.
#include <stdio.h>
#include <conio.h>
void main() {
    int n, i, num, even_sum = 0, odd_sum = 0;
    clrscr();
    // Ask the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Loop through the n numbers
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        // Check if the number is even or odd and add to respective sum
        if(num % 2 == 0) {
            even_sum += num;  // Add to even sum
        } else {
            odd_sum += num;   // Add to odd sum
        }
    }

    // Print the results
    printf("\nSum of even numbers: %d", even_sum);
    printf("\nSum of odd numbers: %d", odd_sum);

    getch();
}
