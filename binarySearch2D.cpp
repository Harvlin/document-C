#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to flatten the 2D matrix into a 1D vector of pairs
vector<   pair<int, pair<int, int>>   > flatten(const vector<vector<int>> &matrix) {
    vector<   pair<int, pair<int, int>>   > flat;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            flat.push_back({matrix[i][j], {i, j}});
        }=[]
    }
    return flat;
}

// Function to sort the flattened vector
void vectorSort(vector<pair<int, pair<int, int>>> &ar) {
    sort(ar.begin(), ar.end());
}

// Binary search to find the target value in the sorted array
int binarySearch(const vector<pair<int, pair<int, int>>> &ar, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (target == ar[mid].first)
            return mid;
        if (ar[mid].first < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;  // Target not found
}

int main() {
    int target;
    cout << "Enter target value: ";
    cin >> target;

    // Define the 2D array
    vector<vector<int>> array {
        {3, 4, 5},
        {7, 6, 18},
        {9, 1, 2}
    };

    // Flatten the 2D array
    vector<pair<int, pair<int, int>>> arr = flatten(array);
    
    // Sort the flattened array
    vectorSort(arr);
    
    // Perform binary search on the sorted array
    int result = binarySearch(arr, 0, arr.size() - 1, target);
    
    if (result == -1) {
        cout << "Element not found!" << endl;
    } else {
        // Output the row and column (adjusted by +1 for human-readable format)
        cout << "Element found at row " << arr[result].second.first + 1 << 
                " and column " << arr[result].second.second + 1 << endl;
    }

    return 0;
}
