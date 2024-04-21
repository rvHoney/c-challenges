#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declare variables
    int length, shouldContainLowercase, shouldContainUppercase, shouldContainNumbers, shouldContainSpecialCharacters, user_input;
    char *password;

    // Get the length of the password from the user
    do
    {
        printf("Enter the length of the password: ");
        user_input = scanf("%d", &length);

        // If the player's guess is not a valid number, print an error message and clear the input buffer
        if (user_input != 1)
        {
            printf("Please enter a valid integer.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1);

    // Get the user's preferences for the password
    do
    {
        printf("Should contain lowercase characters? (1 for yes, 0 for no): ");
        user_input = scanf("%d", &shouldContainLowercase);

        // If the player's guess is not a valid number, print an error message and clear the input buffer
        if (user_input != 1 || (shouldContainLowercase != 0 && shouldContainLowercase != 1))
        {
            printf("Please enter a valid integer between 0 and 1.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1 || (shouldContainLowercase != 0 && shouldContainLowercase != 1));

    // Get the user's preferences for the password
    do
    {
        printf("Should contain uppercase characters? (1 for yes, 0 for no): ");
        user_input = scanf("%d", &shouldContainUppercase);

        // If the player's guess is not a valid number, print an error message and clear the input buffer
        if (user_input != 1 || (shouldContainUppercase != 0 && shouldContainUppercase != 1))
        {
            printf("Please enter a valid integer between 0 and 1.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1 || (shouldContainUppercase != 0 && shouldContainUppercase != 1));

    // Get the user's preferences for the password
    do
    {
        printf("Should contain numbers? (1 for yes, 0 for no): ");
        user_input = scanf("%d", &shouldContainNumbers);

        // If the player's guess is not a valid number, print an error message and clear the input buffer
        if (user_input != 1 || (shouldContainNumbers != 0 && shouldContainNumbers != 1))
        {
            printf("Please enter a valid integer between 0 and 1.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1 || (shouldContainNumbers != 0 && shouldContainNumbers != 1));

    // Get the user's preferences for the password
    do
    {
        printf("Should contain special characters? (1 for yes, 0 for no): ");
        user_input = scanf("%d", &shouldContainSpecialCharacters);

        // If the player's guess is not a valid number, print an error message and clear the input buffer
        if (user_input != 1 || (shouldContainSpecialCharacters != 0 && shouldContainSpecialCharacters != 1))
        {
            printf("Please enter a valid integer between 0 and 1.\n");
            while (getchar() != '\n')
                ;
        }
    } while (user_input != 1 || (shouldContainSpecialCharacters != 0 && shouldContainSpecialCharacters != 1));

    // Check if the password must contain at least one type of character
    if (shouldContainLowercase == 0 && shouldContainUppercase == 0 && shouldContainNumbers == 0 && shouldContainSpecialCharacters == 0)
    {
        printf("Password must contain at least one type of character.\n");
        return 1;
    }

    // Allocate memory for the password
    // We need to add 1 to the length to store the end of string character
    password = (char *)malloc(length + 1);

    // Generate the password
    // (a-z: 97-122, A-Z: 65-90, 0-9: 48-57, special characters: 33-47)
    srand(time(NULL));

    for (int i = 0; i < length; i++)
    {
        int random = rand() % 4;

        if (random == 0 && shouldContainLowercase)
        {
            password[i] = 'a' + rand() % 26;
        }
        else if (random == 1 && shouldContainUppercase)
        {
            password[i] = 'A' + rand() % 26;
        }
        else if (random == 2 && shouldContainNumbers)
        {
            password[i] = '0' + rand() % 10;
        }
        else if (random == 3 && shouldContainSpecialCharacters)
        {
            password[i] = '!' + rand() % 15;
        }
        else
        {
            i--;
        }
    }

    // Add the end of string character to the password
    password[length] = '\0';

    printf("Generated password: %s\n", password);

    // Free the memory allocated for the password
    free(password);

    return 0;
}