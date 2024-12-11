//WAP to illustration working of pointer
#include <stdio.h>
#include <conio.h>
void main(){
    int var = 10;        // Declare an integer variable
    int *ptr;            // Declare a pointer variable
    clrscr();
    ptr = &var;          // Store the address of 'var' in 'ptr'

    // Display the value and address using the variable and pointer
    printf("Value of var: %d\n", var);           // Using the variable
    printf("Address of var: %p\n", &var);        // Address of the variable
    printf("Value stored in pointer ptr: %p\n", ptr); // Pointer value
    printf("Value pointed to by ptr: %d\n", *ptr);    // Value at the address

    // Modify the value of 'var' using the pointer
    *ptr = 20;
    printf("\nAfter modifying value using pointer:\n");
    printf("Value of var: %d\n", var);           // Modified value
    printf("Value pointed to by ptr: %d\n", *ptr);    // Same as 'var'

    getch();
}
