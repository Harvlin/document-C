#include<stdio.h>
#include<stdlib.h>
int ascending(const void *a, const void *b)
{
	return(*(int*)a - *(int*)b);
}
int main()
{
	int number[] = {5, 3, 2, 0, 1, 4};
	size_t num_element = sizeof(number) / sizeof(number[0]);
	qsort(number, num_element, sizeof(int), ascending);
	printf("Array setelah diurutkan: ");
	for (int i = 0; i < num_element; i++)
	{
		printf("%d", number[i]);
	}
	printf("\n");
 	return 0;
}
