#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
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
