#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100
struct Contact {
      char name[50];
      int number;
};
struct Contact phonebook[MAX_CONTACTS];
int numContacts = 0;
void addContact() {
      printf("Name: "); scanf("%s", &phonebook[numContacts].name);
      printf("Number: "); scanf("%d", &phonebook[numContacts].number);

      for (int i = 0; i < numContacts; i++) {
            if (strcmp(phonebook[i].name, phonebook[numContacts].name)== 0) {
                  printf("Already exist\n");
                  return;
            }
      }
      printf("Added\n");
      numContacts++;
}
void deleteContact() {
      char name[50];
      printf("Name: "); scanf("%s", &name);
      
      for (int i = 0; i < numContacts; i++) {
            if (strcmp(phonebook[i].name, name) == 0) {
                  for (int j = i; j < numContacts - 1; j++) {
                        phonebook[j] = phonebook[j + 1];
                  }
                  numContacts--;
                  printf("Deleted\n"); return;
            }
      }
      printf("Not found\n");
}
void viewContact() {
      printf("List:\n");
      for (int i = 0; i < numContacts; i++) {
            printf("Name: %s  Number: %d\n", phonebook[i].name, phonebook[i].number);
      }
}
void updateContact() {
      char name[50];
      printf("Name: "); scanf("%s", &name);
      for (int i = 0; i < numContacts; i++) {
            if (strcmp(phonebook[i].name, name) == 0) {
                  printf("Number: "); scanf("%s", &phonebook[i].number);
                  printf("Updated\n");
                  return;
            }
      }

      printf("Not found\n");
}
int main() {
      while (1) {
            printf("\n---Phone Book---\n1. Add\n2. Delete\n3. View\n4. Updated\n5. Exit\n");
            printf("Enter your choice: "); int choice; scanf("%d", &choice);

            switch(choice) {
                  case 1:
                        addContact();
                        break;
                  case 2:
                        deleteContact();
                        break;
                  case 3:
                        viewContact();
                        break;
                  case 4:
                        updateContact();
                        break;
                  case 5:
                        return 0;
                  default:
                        printf("Invalid choice\n");
            }
      }
      return 0;
}