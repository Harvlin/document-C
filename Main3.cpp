#include <iostream>
#include <vector>
using namespace std;

/*
addLargeNumber
bfs
bigmod
prima .
binarySearch 2d .
dadu 
decode
fac .
find() .
fpbkpk .
insertionsort .
Membuatkelompok
palindrom . 
permutasi
probabilitas .
rand
shift
thousanNumberSeparator
vecmap
*/


void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int j = i - 1;
        int key = arr[i];

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
}


int main() {
    
}
