#include <stdio.h>
#include "menu.h"

// Display the available calculator operations.
void display_menu(void)
{
    printf("\n");
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");    
    printf("-------------------------------------------------\n");
}

// Get the user's menu choice.
int get_menu_choice(void)
{
    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);  // Receive the user's selection.

    return choice;
}