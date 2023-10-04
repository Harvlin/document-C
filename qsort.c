#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);

int compare(const void *a, const void *b) {
	
	int int_a = *((int*)a);
	int int_b = *((int*)b);
	
	if (int_a == int_b) return 0;
	else if (int_a < int_b) return -1;
	else return 1;
}
int main()
{
	int arr[] = {2, 1, 4, 5, 3, 6, 9, 7, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, n, sizeof(int), compare);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
 	return 0;
}
