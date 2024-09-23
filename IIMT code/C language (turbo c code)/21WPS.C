//WAP to print the day using else if ladder.
#include <stdio.h>
#include <conio.h>
void main() {
    int day;
    clrscr();   
    printf("Enter a day number (1-7): ");
    scanf("%d", &day); 
    if (day == 1) {
        printf("Sunday\n");
    } else if (day == 2) {
        printf("Monday\n");
    } else if (day == 3) {
        printf("Tuesday\n");
    } else if (day == 4) {
        printf("Wednesday\n");
    } else if (day == 5) {
        printf("Thursday\n");
    } else if (day == 6) {
        printf("Friday\n");
    } else if (day == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid day number.\n");
    } 
    printf("Press any key to exit.");
    getch();
}
