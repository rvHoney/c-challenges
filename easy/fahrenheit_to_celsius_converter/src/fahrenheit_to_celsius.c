#include <stdio.h>
#include <stdio.h>

// Function prototypes
float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);

int main()
{
    // Initialize variables; Their values will be set by the user
    int conversion_type, user_input;
    float temperature;

    while(1)
    {
        printf("Please choose the type of conversion:\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("3. Exit\n\n");

        // Get the user's choice of conversion type
        do
        {
            printf("Enter your choice: ");
            user_input = scanf("%d", &conversion_type);

            // If the user's input is not a valid number or is not between 1 and 3, print an error message and clear the input buffer
            if (user_input != 1 || conversion_type < 1 || conversion_type > 3)
            {
                printf("Please enter a valid number [1-3].\n");
                while (getchar() != '\n')
                    ;
            }
        } while (user_input != 1 || conversion_type < 1 || conversion_type > 3);

        // If the user chooses to exit, break out of the loop
        if (conversion_type == 3)
        {
            break;
        }

        // Get the user's input for the temperature
        do
        {
            printf("Enter the temperature: ");
            user_input = scanf("%f", &temperature);

            // If the user's input is not a valid number, print an error message and clear the input buffer
            if (user_input != 1)
            {
                printf("Please enter a valid number.\n");
                while (getchar() != '\n')
                    ;
            }
        } while (user_input != 1);

        // Perform the selected operation based on the user's choice
        if (conversion_type == 1)
        {
            printf("%.2f Fahrenheit is %.2f Celsius.\n\n", temperature, fahrenheit_to_celsius(temperature));
        }
        else
        {
            printf("%.2f Celsius is %.2f Fahrenheit.\n\n", temperature, celsius_to_fahrenheit(temperature));
        }
    }

    return 0;
}

// Function definitions
float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}