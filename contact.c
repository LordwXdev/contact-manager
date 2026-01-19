#include<stdio.h>
#include<string.h>
#include "contact.h"

//add contact

int add_contact(Contact contacts[], int *count)
{
    if(*count >= MAX_CONTACTS)
    {
        printf("Contact list is full. \n");
        return 0;
    }

    Contact *c = &contacts[*count];

    c->ID = *count +1;

    printf("Enter name: ");
    fgets(c->name, NAME_LEN,stdin);
    c->name[strcspn(c->name, "\n")] = '\0';

    printf("Enter phone: \n");
    fgets(c->phone, PHONE_LEN, stdin);
    c->phone[strcspn(c->phone, "\n")] = '\0';

    printf("Enter email: ");
    fgets(c->email, EMAIL_LEN, stdin);
    c->email[strcspn(c->email, "\n")] = '\0';

    (*count)++;
    printf("Contact added successfully.\n");

    return 1;
}

//list all contacts

void list_contacts(const Contact contacts[], int count)
{
     if (count == 0) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- Contact List ---\n");

    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", contacts[i].ID);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
        printf("--------------------\n");
    }
}

//Find contact by name

int find_contact_by_name(const Contact contacts[], int count, const char *name)
{

}