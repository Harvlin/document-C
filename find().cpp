#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> number = {1, 2, 3, 4, 5, 6, 7, 8};
      auto it = find(number.begin(), number.end(), 8);
      if (it != number.end())
            cout << ": " << distance(number.begin(), it);
      else 
            cout << "Not found";
      return 0;
}
