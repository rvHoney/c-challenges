# Fahrenheit to celsius converter (EASY)
*A working version of the program can be downloaded in this folder (can be used as a correction).*

## Description
Create a program that converts a temperature in Fahrenheit to Celsius. The program should ask the user to enter a temperature in Fahrenheit and then display the temperature in Celsius.

Compile the program:
```bash
$ gcc -o ./bin/fahrenheit_to_celsius ./src/fahrenheit_to_celsius.c
```

Run the program:
```bash
$ ./bin/fahrenheit_to_celsius
```

## Plan
1. Display a message asking the user to enter a temperature in Fahrenheit.
2. Read the temperature in Fahrenheit from the user.
3. Convert the temperature from Fahrenheit to Celsius using the formula: `C = (F - 32) * 5/9`.
4. Display the temperature in Celsius.

## Additional steps
- Add input validation to ensure the user enters valid numbers.
- A a selection to allow the user to convert from Celsius to Fahrenheit.
- Add a loop to allow the user to convert multiple temperatures without restarting the program.

## Example
```
Enter a temperature in Fahrenheit: 32
32 degrees Fahrenheit is 0 degrees Celsius.
```