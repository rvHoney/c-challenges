# Contact list (MEDIUM)
*A working version of the program can be downloaded in this folder (can be used as a correction).*

## Description
Create a contact list program that allows the user to store and manage contacts (name, phone number, email).

Compile the program:
```bash
$ gcc -o ./bin/contact_list ./src/contact_list.c
```

Run the program:
```bash
$ ./bin/contact_list
```

## Plan
1. Display a menu with the following options: add a contact, list contacts, search for a contact, delete a contact, and exit.
2. Implement the functionality for each option.

## Additional steps
- Add input validation to ensure the user enters valid data (only to match the type of data expected).
- Add a feature to fetch user by id.

## Example
```
Welcome to the contact list program!
1. Add a contact
2. Delete a contact
3. Get a contact
4. Get all contacts
5. Exit
Enter the action you want to perform: 1
Enter the name: John Doe
Enter the phone number: 1234567890
Enter the email: john.doe@mail.com
```