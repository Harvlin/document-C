#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int left, int right, int target) {
      while (left <= right) {
            int mid = left + (right - left) / 2;
            if (target == array[mid])
                  return mid;
            if (array[mid] < target)
                  left = mid + 1;
            else 
                  right = mid - 1;
      }
      return -1;
}
int main(void) {
      int array[] = {6, 3, 2, 1, 5, 4};
      int target; cin >> target;
      int size = sizeof(array)/sizeof(array[0]);
      sort(array, array + size);
      int result = binarySearch(array, 0, size - 1, target);
      if (result != -1) {
            cout << "Found at index " << result;
      } else {
            cout << "Not found";
      }
}