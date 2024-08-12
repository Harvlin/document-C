#include <iostream>
#include <algorithm>
using namespace std;
int main() {
      int arr[] = {2, 5, 3, 4, 1};
      int size = sizeof(arr) / sizeof(arr[0]);
      int num_to_find = 3;

      auto it = find(arr, arr + size, num_to_find);

      if (it != arr + size) 
            cout << "Number found at index " << it - arr;
      else 
            cout << "Number not found in the array";
      return 0;
}
