//WAP to check if entered number is a perfect square.	
#include <stdio.h>
#include <math.h>
#include <conio.h>
void main() {
    int num, root;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    root = sqrt(num);
    if (root * root == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }
    printf("Press any key to exit.");
    getch();
}
