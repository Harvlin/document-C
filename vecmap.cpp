#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(void) {
      map<string, int> studentScores;
      char continueInput = 'y';
      while (continueInput == 'y' || continueInput == 'Y') {
            string name;
            int score;

            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter student score: ";
            cin >> score;
            
            //Pengisian studentScore map
            studentScores[name]  = score;

            cout << "Continue: ";
            cin >> continueInput;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), "\n");
      }

      for (const auto& pair : studentScores) {
            cout << pair.first << pair.second  << endl;
      }
      vector <string> names;
      for (const auto& pair : studentScores) {
            names.push_back(pair.first);
      }
      for (const auto& pair : names)  {
            cout << names << endl;
      }
      return 0;
}