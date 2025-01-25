#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct data {
      string nama;
      int nis;
      double nilai;
};

int main() {
      vector<data> posn = {
            {"Firman", 35, 8},
            {"Firman", 34, 9},
            {"Firman", 33, 10}
      };

      sort(posn.begin(), posn.end(), [](const data &a, const data &b) {
            return a.nama > b.nama;
      });

      for (const auto &na : posn) {
            cout << na.nama << " " << na.nis << " " << na.nilai << endl;
      }
}