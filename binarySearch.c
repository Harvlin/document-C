#include<stdio.h>
int binarySearch(int arr[], int left, int right, short target);
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
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(array) / sizeof(array[0]);
	int target; scanf("%d", &target);
	
	int result = binarySearch(array, 0, n-1, target);
	if (result != 1)
		printf("Elemen %d ditemukan di indeks %d\n", target, result);
	else
		printf("Tidak ditemukan");

 	return 0;
}
