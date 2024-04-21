#include <stdio.h>

// Function prototypes
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);

int main()
{
    // Initialize variables; Their values will be set by the user
    int operation_type, user_input;
    float first_number, second_number;

    printf("Please choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    // Get the user's choice of operation
    do
    {
        printf("Enter your choice: ");
        user_input = scanf("%d", &operation_type);

        // If the user's input is not a valid number or is not between 1 and 4, print an error message and clear the input buffer
        if (user_input != 1 || operation_type < 1 || operation_type > 4)
        {
            printf("Please enter a valid number [1-4].\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1 || operation_type < 1 || operation_type > 4);

    // Get the user's input for the first number
    do
    {
        printf("Enter the first number: ");
        user_input = scanf("%f", &first_number);

        // If the user's input is not a valid number, print an error message and clear the input buffer
        if (user_input != 1)
        {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1);

    // Get the user's input for the second number
    do
    {
        printf("Enter the second number: ");
        user_input = scanf("%f", &second_number);

        // If the user's input is not a valid number, print an error message and clear the input buffer
        if (user_input != 1)
        {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1);

    // Perform the selected operation based on the user's choice
    if (operation_type == 1)
        add(first_number, second_number);
    if (operation_type == 2)
        subtract(first_number, second_number);
    if (operation_type == 3)
        multiply(first_number, second_number);
    if (operation_type == 4)
        divide(first_number, second_number);

    return 0;
}

// Function definitions
void add(float a, float b)
{
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b)
{
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b)
{
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b)
{
    // Check if the second number is zero to avoid division by zero
    if (b == 0)
    {
        printf("Error: Division by zero.\n");
    }
    else
    {
        printf("Result: %.2f\n", a / b);
    }
}