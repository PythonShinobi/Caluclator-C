#include <stdio.h>
#include "menu.h"
#include "calculator.h"


int main(void)
{
    // Declare variable data types
    int choice;
    double number1;
    double number2;

    printf("Welcome to the Calculator!\n");

    // Repeat the calculator until the user choose 0.
    do
    {
        display_menu();

        choice = get_menu_choice();

        // Calculator Logic:
        // Only request numbers for valid mathematical operations.
        if (choice >=1 && choice <= 5)
        {
            printf("ENTER THE FIRST NUMBER: ");
            scanf("%lf", &number1);

            printf("ENTER THE SECOND NUMBER: ");
            scanf("%lf", &number2);
        }

        // Execute the selected operation.
        switch(choice)
        {
            default:
                printf("Invalid Choice\n");
                break;

            case 0:
                printf("Goodbye!\n");
                break;

            case 1:
                printf("Result: %.2f\n", add(number1, number2));
                break;

            case 2:
                printf("Result: %.2f\n", subtract(number1, number2));
                break;

            case 3:
                printf("Result: %.2f\n", multiply(number1, number2));
                break;

            case 4:
                if (number2 != 0)
                {
                    printf("Result: %.2f\n", divide(number1, number2));
                }
                else
                {
                    printf("Error: Cannot divide by zero.\n");
                }

                break;

            case 5:
                int a = (int)number1;
                int b = (int)number2;

                if (b != 0)
                {
                    printf("Result: %d\n", modulus(a, b));
                }
                else
                {
                    printf("Error: Cannot perform modulus by zero.\n");
                }
            
                break;
        }

    } while (choice != 0);

    // Used to signal to the operating system (OS) 
    // that the program has executed successfully 
    // and terminated without errors.
    return 0;
}