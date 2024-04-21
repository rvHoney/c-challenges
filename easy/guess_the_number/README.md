# Guess the number (EASY)
*A working version of the program can be downloaded in this folder (can be used as a correction).*

## Description
The computer will think of a random number from 1 to 100, and ask you to guess it. You have infinite number of tries to guess the number, and the computer will tell you if you are too high or too low. You win if you can guess the number with infinite tries.

Compile the program:
```bash
$ gcc -o ./bin/guess_the_number ./src/guess_the_number.c
```

Run the program:
```bash
$ ./bin/guess_the_number
```

## Plan
1. Generate a random number from 1 to 100.
2. Ask the user to guess the number.
3. If the user's guess is incorrect, tell the user if the guess is too high or too low.
4. Repeat steps 2 and 3 until the user guesses the correct number.
5. Print a congratulatory message when the user guesses the correct number.

## Additional steps
- Add a feature to control the user's input. If the user enters a non-integer value, ask the user to enter a valid integer.
- Add a feature to limit the number of tries. If the user exceeds the number of tries, print a message that the user has lost the game.

## Example
```
Guess the number (1-100): 50
Too high! Try again.

Guess the number (1-100): 25
Too low! Try again.

Guess the number (1-100): 37
You won! The number was 37.
```