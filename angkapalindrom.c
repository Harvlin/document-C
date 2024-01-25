#include <stdio.h>

int isNumberPalindrome(int num) {
    int reversed = 0, original = num;
      while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
      }
    return (original == reversed);
}
int main() {
    int number; printf(">> "); scanf("%d", &number);
    if (isNumberPalindrome(number))
        printf("Iya");
    else
        printf("Bukan");

    return 0;
}
