#include<stdio.h>
int main()
{
	int A[] = {5, 3, 12, 14}, B[] = {8, 7, 5, 9};
	int C[4];
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		C[i] = A[i] + B[i];
	}
	printf("A[ ");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		printf("%4d", A[i]);
	}
	printf(" ] + B[ ");
	for (int i = 0; i < (sizeof(B) / sizeof(B[0])); i++)
	{
		printf("%4d", B[i]);
	}
	printf(" ] = C[ ");
	for (int i = 0; i < (sizeof(C) / sizeof(C[0])); i++)
	{
		printf("%4d", C[i]);
	}
	printf(" ]");
 	return 0;
}
