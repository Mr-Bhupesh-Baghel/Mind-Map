//WAP to find the area of a right angled triangle Using user defined function with  arguments and no return
#include <stdio.h>
#include <conio.h>

// Function to calculate and print the area of a right-angled triangle
void A(float base, float height) {
    float area = (base * height) / 2;
    printf("The area of the right-angled triangle is: %.2f\n", area);
}

void main(){
    float base, height;
    clrscr();
    // Input base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Call the user-defined function
    A(base, height);

    getch();
}

    