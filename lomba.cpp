#include <bits/stdc++.h>
using namespace std;

int main() {
      int n; cin >> n;
      vector<int> num(n);

      for (int i = 0; i < n; i++) {
            cin >> num[i];
      }

      auto minValue = *min_element(num.begin(), num.end());
      auto maxValue = *max_element(num.begin(), num.end());
      int selisih = maxValue - minValue;

      int countMaxOccur = count(num.begin(), num.end(), maxValue);
      int countMinOccur = count(num.begin(), num.end(), minValue);

      long long jumlahCara;
      if (maxValue == minValue) {
            jumlahCara = (long long)countMaxOccur * (countMaxOccur - 1) / 2;
      } else {
            jumlahCara = (long long)countMaxOccur * countMinOccur;
      }

      cout << selisih << " " << jumlahCara << endl;
      return 0;
}
