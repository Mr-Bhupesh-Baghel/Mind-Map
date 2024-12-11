//WAP to generate all combinations of 1,2& 3. Using user defined function with  no arguments and with no return
#include <stdio.h>
#include <conio.h>
// Function to generate and print all combinations
void generateCombinations() {
    int i, j, k;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            for (k = 1; k <= 3; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
}

void main() {
    void  generateCombinations();
    // Call the function
    generateCombinations();
    getch();
}

