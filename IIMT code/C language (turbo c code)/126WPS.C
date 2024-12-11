//WAP to read n students record  with 5 subject’s marks as array and print their performance
#include <stdio.h>
#include <conio.h>

// Define a structure to store student information
struct Student {
    int marks[5];  // Array to store marks of 5 subjects
    float total;   // Total marks
    float average; // Average marks
    char grade;    // Grade based on performance
};

// Function to calculate grade based on average marks
char calculateGrade(float average) {
    if (average >= 90) {
	return 'A';
    } else if (average >= 75) {
	return 'B';
    } else if (average >= 60) {
	return 'C';
    } else if (average >= 50) {
	return 'D';
    } else {
	return 'F';
    }
}

void main() {
    int n, i, j;
    struct Student students[50];  // Declare an array of Student structures with a fixed size
    clrscr();  // Clear screen (specific to Turbo C)

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);



    // Read student records
    for (i = 0; i < n; i++) {
        printf("\nEnter marks for student %d:\n", i + 1);
        students[i].total = 0;  // Initialize total marks to 0 for each student

        // Read marks for 5 subjects
        for (j = 0; j < 5; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];  // Add marks to total
        }

        // Calculate average and grade
        students[i].average = students[i].total / 5.0;
        students[i].grade = calculateGrade(students[i].average);
    }

    // Print performance of students
    printf("\nStudent Performance Report:\n");
    printf("Student No. | Total Marks | Average Marks | Grade\n");
    printf("-----------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%.2f\t\t%.2f\t\t%c\n", i + 1, students[i].total, students[i].average, students[i].grade);
    }

    getch();  // Wait for a key press (specific to Turbo C)
}
