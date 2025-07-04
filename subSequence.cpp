#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void countFrequency(const string &s, int freq[26]) {
   fill(freq, freq + 26, 0);
   for (char c: s) {
      freq[c - 'a']++;
   }
}

int main() {
   vector<pair<string, string>> input;
   int n; cin >> n;
   cin.ignore(); 
   
   for (int i = 0; i < n; i++) {
      string a, b;
      getline(cin, a);
      getline(cin, b);
      input.push_back({a, b});
   }

   for(const auto &pair : input) {
      string a = pair.first;
      string b = pair.second;

      int freqA[26], freqB[26];

      countFrequency(a, freqA);
      countFrequency(b, freqB);

      string result = "";

      for (int i = 0; i < 26; i++) {
         int common = min(freqA[i], freqB[i]);
         result += string(common, 'a' + i);
      }

      cout << result << endl;
   }
   return 0;
}