#include<iostream>
#include<map>
using namespace std;

int main() {
      string word = "PEMBELAJARAN INFORMATIKA";
      map<char, int> frequency;

      for (char c: word) {
            frequency[c] ++;
      }

      for(auto pair: frequency) {
            cout << pair.first << ":" << pair.second << endl;
      }
      return 0;
}