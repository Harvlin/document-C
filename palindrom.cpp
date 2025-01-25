#include<iostream>
#include<string>
using namespace std;
bool PalStr(string word) {
      int length = word.length();
      int i, j;
      for (i = 0, j = length - 1; i < j; i++, j--) {
            if (word[i] != word[j]) {
                  return false;
            }
      }
      return true;
}
int main(void) {
      string number; getline(cin, number);
      cout << PalStr(number);
}