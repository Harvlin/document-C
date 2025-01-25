#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
      vector<int> number = {5, 3, 1, 2, 4};
      int num_to_find = 2;

      auto it = find(number.begin(), number.end(), num_to_find);
      if (it != number.end()) {
            cout << "Found at index " << it - number.begin();
      } else {
            cout << "Not Found";
      }
      return 0;
}
