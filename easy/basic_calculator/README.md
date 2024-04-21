# Basic Calculator (EASY)
*A working version of the program can be downloaded in this folder (can be used as a correction).*

## Description
This basic calculator allows you to perform simple arithmetic operations such as addition, subtraction, multiplication, and division. The user inputs two numbers and selects an operation, and the program returns the result.

Compile the program:
```bash
$ gcc -o ./bin/basic_calculator ./src/basic_calculator.c
```

Run the program:
```bash
$ ./bin/basic_calculator
```

## Plan
1. Display the menu of available operations (addition, subtraction, multiplication, division).
2. Ask the user to enter the first number.
3. Ask the user to choose an operation.
4. Ask the user to enter the second number.
5. Perform the chosen operation with the two numbers.
6. Display the result.

## Additional steps
- Add input validation to ensure the user enters valid numbers.
- Handle division-by-zero errors.

## Example
```
Please choose an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division

Enter your choice: 1
Enter the first number: 10
Enter the second number: 5
Result: 15
```