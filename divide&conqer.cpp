#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMax(const vector<int> arr, int left, int right) {
	if (left == right) {
		return arr[left];
	}
	
	int mid = left + (right - left) / 2;
	
	int maxLeft = findMax(arr, left, mid);
	int maxRight = findMax(arr, mid + 1, right);
	
	return max(maxLeft, maxRight);
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = arr.size();
	int maxElement = findMax(arr, 0, n - 1);
	cout << maxElement;
	return 0;
}