#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
    int id;
    char *name;
    char *phone;
    char *email;
};

struct contact_list
{
    struct contact *contacts;
    int num_contacts;
};

void add_contact(struct contact_list *list, char *name, char *phone, char *email);
void delete_contact(struct contact_list *list, int id);
void get_contact(struct contact_list *list, int id);
void get_contacts(struct contact_list *list);

int main()
{
    struct contact_list list = {NULL, 0};

    int action, user_input;

    do
    {

        do
        {
            printf("Welcome to the contact list program!\n");
            printf("1. Add a contact\n");
            printf("2. Delete a contact\n");
            printf("3. Get a contact\n");
            printf("4. Get all contacts\n");
            printf("5. Exit\n");
            printf("Enter the action you want to perform: ");
            user_input = scanf("%d", &action);

            // If the action is not a valid number, print an error message and clear the input buffer
            if (user_input != 1 || (action < 1 || action > 5))
            {
                printf("Please enter a valid integer between 1 and 5.\n");
                while (getchar() != '\n')
                    ;
            }
        } while (user_input != 1 || (action < 1 || action > 5));

        if (action == 1)
        {
            char name[100], phone[100], email[100];

            do
            {
                printf("Enter the name of the contact: ");
                user_input = scanf("%s", &name);

                // If the player's guess is not a valid number, print an error message and clear the input buffer
                if (user_input != 1)
                {
                    printf("Please enter a valid name.\n");
                    while (getchar() != '\n')
                        ;
                }
            } while (user_input != 1);

            do
            {
                printf("Enter the phone number of the contact: ");
                user_input = scanf("%s", &phone);

                // If the player's guess is not a valid number, print an error message and clear the input buffer
                if (user_input != 1)
                {
                    printf("Please enter a valid phone number.\n");
                    while (getchar() != '\n')
                        ;
                }
            } while (user_input != 1);

            do
            {
                printf("Enter the email of the contact: ");
                user_input = scanf("%s", &email);

                // If the player's guess is not a valid number, print an error message and clear the input buffer
                if (user_input != 1)
                {
                    printf("Please enter a valid email.\n");
                    while (getchar() != '\n')
                        ;
                }
            } while (user_input != 1);

            add_contact(&list, name, phone, email);
        }
        else if (action == 2)
        {
            int id;

            printf("Enter the ID of the contact you want to delete: ");
            scanf("%d", &id);

            delete_contact(&list, id);
        }
        else if (action == 3)
        {
            int id;

            printf("Enter the ID of the contact you want to get: ");
            scanf("%d", &id);

            get_contact(&list, id);
        }
        else if (action == 4)
        {
            get_contacts(&list);
        }
        else if (action == 5)
        {
            free(list.contacts);
            return 0;
        }

        printf("\n");

    } while (action != 5);
}

void add_contact(struct contact_list *list, char *name, char *phone, char *email)
{
    list->contacts = realloc(list->contacts, (list->num_contacts + 1) * sizeof(struct contact));
    if (list->contacts == NULL)
    {
        printf("Failed to allocate memory\n");
        return;
    }

    list->contacts[list->num_contacts].id = list->num_contacts;
    list->contacts[list->num_contacts].name = strdup(name);
    list->contacts[list->num_contacts].phone = strdup(phone);
    list->contacts[list->num_contacts].email = strdup(email);
    list->num_contacts++;
}

void delete_contact(struct contact_list *list, int id)
{
    if (id < 0 || id >= list->num_contacts)
    {
        printf("Invalid contact ID\n");
        return;
    }

    for (int i = id; i < list->num_contacts - 1; i++)
    {
        list->contacts[i] = list->contacts[i + 1];
        list->contacts[i].id = i;
    }

    list->num_contacts--;
    list->contacts = realloc(list->contacts, list->num_contacts * sizeof(struct contact));
}

void get_contact(struct contact_list *list, int id)
{
    if (id < 0 || id >= list->num_contacts)
    {
        printf("Invalid contact ID\n");
        return;
    }

    printf("Contact %d: %s, %s, %s\n", list->contacts[id].id, list->contacts[id].name, list->contacts[id].phone, list->contacts[id].email);
}

void get_contacts(struct contact_list *list)
{
    for (int i = 0; i < list->num_contacts; i++)
    {
        printf("Contact %d: %s, %s, %s\n", list->contacts[i].id, list->contacts[i].name, list->contacts[i].phone, list->contacts[i].email);
    }
}