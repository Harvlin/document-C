#include<algorithm>
#include<iostream>
using namespace std;
bool compare(int a, int b) {
    return a < b; 
}
int main() {
      int arr[] = {4, 2, 7, 1, 9};
      int n = sizeof(arr) / sizeof(arr[0]);
      sort(arr, arr + n, compare);
      for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
      }
      return 0;
}