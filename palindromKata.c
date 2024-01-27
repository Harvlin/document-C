#include<stdio.h>
#include<string.h>

int isPalindrom(char str[]) {
      int length = strlen(str);
      int i, j;

      for (i = 0, j = length - 1; i < j; i++, j--) {
            if (str[i] != str[j]) {
                  return 0;
            }
      }
      return 1;
}

int main(void) {
      char input[100];

      printf("String: "); fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';

      if (isPalindrom(input)) {
            printf("Palindrom");
      } else {
            printf("Bukan");
      }
      return 0;
}