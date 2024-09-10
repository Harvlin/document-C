#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, pair<int, int>>> flatten(vector<vector<int>> &matrix) {
	vector<pair<int, pair<int, int>>> flat;
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			flat.push_back({matrix[i][j], {i, j}});
		}
	}
	return flat;
}

void qsort(vector<pair<int, pair<int, int>>> &ar) {
	sort(ar.begin(), ar.end());
}

int binarySearch(vector<pair<int, pair<int, int>>> &ar, int left, int right, int target) {
      while (left <= right) {
            int mid = left + (right - left) / 2;
            if (target == ar[mid].first)
                  return mid;
            if (ar[mid].first < target)
                  left = mid + 1;
            else 
                  right = mid - 1;
      }
      return -1;
}

int main() {
	int target; cout << "Target: "; cin >> target;
	vector<vector<int>> array {
		{3, 4, 5},
		{7, 6, 18},
		{9, 1, 2}
	};
	
	vector<pair<int, pair<int, int>>> arr = flatten(array);
    
    qsort(arr);
    
    int result = binarySearch(arr, 0, arr.size() - 1, target);
    
    if (result == -1) {
    	cout << "None";
	} else {
		cout << "Elemen ditemukan di baris " << arr[result].second.first + 1<< 
				" dan kolom " << arr[result].second.second + 1 << endl;
	}
	
	return 0;
}