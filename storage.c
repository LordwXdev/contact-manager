#include <stdio.h>
#include "storage.h"

/* ===============================
   Save contacts to file
   =============================== */
int save_contacts(const char *filename, Contact contacts[], int count)
{
    FILE *fp = fopen(filename, "wb");
    if (!fp) {
        return 0;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(contacts, sizeof(Contact), count, fp);

    fclose(fp);
    return 1;
}

/* ===============================
   Load contacts from file
   =============================== */
int load_contacts(const char *filename, Contact contacts[], int *count)
{
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        *count = 0;
        return 0;
    }

    fread(count, sizeof(int), 1, fp);
    fread(contacts, sizeof(Contact), *count, fp);

    fclose(fp);
    return 1;
}
