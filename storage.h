#ifndef STORAGE_H
#define STORAGE_H

#include "contact.h"

/* Save all contacts to file */
int save_contacts(const char *filename, Contact contacts[], int count);

/* Load contacts from file */
int load_contacts(const char *filename, Contact contacts[], int *count);

#endif
