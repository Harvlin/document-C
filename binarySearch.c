#include<stdio.h>
int binarySearch(int arr[], int left, int right, int target);
int binarySearch(int arr[], int left, int right, short target)
{
	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == target)
			return mid;
		if (arr[mid] < target)
			left = mid + 1;
		else 
			right = mid - 1;
	}
	return -1;
}
int main()
{
	int array[] = {10, 31, 2, 21, 27, 8};
	int n = sizeof(array) / sizeof(array[0]);
	int target = 27;
	
	int result = binarySearch(array, 0, n-1, target);
	if (result != 1)
		printf("Elemen %d ditemukan di indeks %d\n", target, result);
	else
		printf("Tidak ditemukan");

 	return 0;
}
