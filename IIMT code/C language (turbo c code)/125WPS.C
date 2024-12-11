//WAP to read a student record  with 5 subject’s marks as array and print his performance
#include <stdio.h>
#include <conio.h>
void main() {
    int marks[5];
    int i, total = 0;
    float average;
    clrscr();
    // Input: Reading marks of 5 subjects
    printf("Enter the marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Accumulating the total marks
    }

    // Calculate average
    average = total / 5.0;

    // Output: Displaying student's performance
    printf("\nStudent's Marks in 5 Subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    // Performance evaluation based on average
    if(average >= 90) {
        printf("Performance: Excellent\n");
    } else if(average >= 75) {
        printf("Performance: Good\n");
    } else if(average >= 50) {
        printf("Performance: Average\n");
    } else {
        printf("Performance: Poor\n");
    }

    getch();
}
