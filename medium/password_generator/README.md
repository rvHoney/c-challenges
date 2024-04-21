# Password generator (MEDIUM)
*A working version of the program can be downloaded in this folder (can be used as a correction).*

## Description
Create a basic password generator that generates a random password of a given length.

Compile the program:
```bash
$ gcc -o ./bin/password_generator ./src/password_generator.c
```

Run the program:
```bash
$ ./bin/password_generator
```

## Plan
1. Ask the user for the length of the password.
2. Generate a random password of the given length.
3. Display the generated password.

## Additional steps
- Add input validation to ensure the user enters valid numbers.
- Add a menu to allow the user to choose the type of characters to include in the password (uppercase, lowercase, digits, special characters).

## Example
```
Enter the length of the password: 10
Generated password: 5a7B3c9D1e
```