//WAP to find simple interest for five sets. Using user defined function with  arguments and with no return
#include <stdio.h>
#include <conio.h>

// Function to calculate simple interest
void si(float p, float r, float t) {
    float simpleInterest = (p * r * t) / 100;
    printf("Simple Interest for Principal %.2f, Rate %.2f, Time %.2f = %.2f\n",
	   p, r, t, simpleInterest);
}

void main() {
    float p, r, t;
    int i;

    clrscr();  // Clear the screen

    // Loop to calculate SI for 5 sets
    for (i = 1; i <= 5; i++) {
	printf("Enter Principal, Rate, and Time for set %d:\n", i);
	scanf("%f %f %f", &p, &r, &t);
	si(p, r, t);  // Call the function
    }

    getch();  // Wait for user input before closing
}
