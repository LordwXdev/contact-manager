#include<stdio.h>
#include<contact.h>
#include<storage.h>

int main(void)
{
    Contact contacts[MAX_CONTACTS];
    int contact_count = 0;
    int choice;

    while(1)
    {
        printf("\n === Contact Manager ===\n");
        printf("1. Add Contact\n");
        printf("2. View contact\n");
        printf("3. Search contact by name \n");
        printf("0. Exit\n");
        printf("Choose an option: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input");
            while(getchar() != '\n');
            continue;
        }

        while(getchar() != '\n');

        if (choice == 0)
        {
            save_contacts("contacts.dat", contacts, contact_count);
             printf("Contacts saved. Goodbye.\n");
            break;
        }
        switch (choice) {
            case 1:
                add_contact(contacts, &contact_count);
                break;

            case 2:
                list_contacts(contacts, contact_count);
                break;

            case 3: {
                char name[NAME_LEN];
                int index;

                printf("Enter name to search: ");
                fgets(name, NAME_LEN, stdin);
                name[strcspn(name, "\n")] = '\0';

                index = find_contact_by_name(contacts, contact_count, name);

                if (index >= 0) {
                    printf("\nContact found:\n");
                    printf("ID: %d\n", contacts[index].ID);
                    printf("Name: %s\n", contacts[index].name);
                    printf("Phone: %s\n", contacts[index].phone);
                    printf("Email: %s\n", contacts[index].email);
                } else {
                    printf("Contact not found.\n");
                }
                break;
            }

            default:
                printf("Invalid option.\n");
        }
    }
    return 0;
}