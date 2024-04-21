#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define MAX_LIVES 10
#define MAX_NUMBER 100

// Function prototypes
int generate_number_to_guess();
void play_game(int number_to_guess);

int main()
{
    // Generate the number for the player to guess
    int number_to_guess = generate_number_to_guess();

    // Start the game with the generated number
    play_game(number_to_guess);

    // Return 0 to indicate that the program has finished successfully
    return 0;
}

// Function to generate a random number for the player to guess
int generate_number_to_guess()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and MAX_NUMBER
    return (rand() % MAX_NUMBER) + 1;
}

// Function to play the guessing game
void play_game(int number_to_guess)
{
    // Initialize the player's proposed number and number of lives
    int proposed_number = 0;
    int player_lives = MAX_LIVES;
    int user_input;

    // Continue the game until the player guesses the number or runs out of lives
    do
    {
        // Get the player's guess
        do
        {
            printf("Guess the number (1-%d): ", MAX_NUMBER);
            user_input = scanf("%d", &proposed_number);

            // If the player's guess is not a valid number, print an error message and clear the input buffer
            if (user_input != 1 || proposed_number < 1 || proposed_number > MAX_NUMBER)
            {
                printf("Please enter a valid integer between 1 and %d.\n\n", MAX_NUMBER);
                while (getchar() != '\n')
                    ;
            }
        } while (user_input != 1 || proposed_number < 1 || proposed_number > MAX_NUMBER);

        // If the player's guess is too low, print a message and decrease the number of lives
        if (proposed_number < number_to_guess)
        {
            printf("Too low! Try again.\n");
            player_lives--;
        }
        // If the player's guess is too high, print a message and decrease the number of lives
        else if (proposed_number > number_to_guess)
        {
            printf("Too high! Try again.\n");
            player_lives--;
        }

        // Print the remaining lives
        printf("Remaining lives %d/%d\n\n", player_lives, MAX_LIVES);
    } while (proposed_number != number_to_guess && player_lives > 0);

    // Check if the player has run out of lives
    if (player_lives <= 0)
    {
        // If so, print a loss message and the correct number
        printf("You lost! The number was %d.\n", number_to_guess);
    }
    else
    {
        // If not, print a win message and the correct number
        printf("You won! The number was %d.\n", number_to_guess);
    }
}