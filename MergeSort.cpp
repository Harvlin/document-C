#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    int i = 0, j = 0, k = left;
    
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    while (i < leftArr.size()) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    
    while (j < rightArr.size()) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

void mergeSort(vector<int>& arr) {
    if (!arr.empty()) {
        mergeSort(arr, 0, arr.size() - 1);
    }
}

void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> testArrays = {
        {64, 34, 25, 12, 22, 11, 90},
        {5, 2, 8, 1, 9},
        {1},
        {},
        {3, 3, 3, 3},
        {9, 8, 7, 6, 5, 4, 3, 2, 1}
    };
    
    for (auto arr : testArrays) {
        vector<int> original = arr;
        
        cout << "Original: ";
        printArray(original);
        
        mergeSort(arr);
        
        cout << "Sorted:   ";
        printArray(arr);
        cout << endl;
    }
    
    return 0;
}