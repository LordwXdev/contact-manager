#ifndef CONTACT_H
#define CONTACT_H

#define NAME_LEN 50
#define PHONE_LEN 20
#define EMAIL_LEN 50

typedef struct 
{
    int ID;
    char name[NAME_LEN];
    char phone[PHONE_LEN];
    char email[EMAIL_LEN];
}Contact;

int add_contact(Contact contacts[], int *count);
void list_contacts(const Contact contacts[],int count);
int find_contact_by_name(const Contact contacts[], int count, const char *name);

#endif