#include<iostream>
#include<string>
using namespace std;
int PalInt(int num) {
      int reversed = 0, original = num;
      while (num > 0) {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num /= 10;
      }
      return (original == reverse);
}
bool PalStr(string word) {
      int length = word.length;
      int i, j;
      for (i = 0, j = length - 1; i < j; i++, j--) {
            if (word[i] != word[j]) {
                  return false;
            }
      }
      return true;
}
int main(void) {
      
}