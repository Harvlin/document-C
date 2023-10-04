#include<stdio.h>
int main()
{
	int A[100][100], B[100][100];
	int b, k, br, kl;
	scanf("%d %d", &br, &kl);
	for (b = 0; b < br; b++) 
	{
		for (k = 0; k < kl; k++)
			A[b][k] = 65 + k;
	}
	for (b = 0; b < br; b++) 
	{
		for (k = 0; k < kl; k++)
			printf("%2c", A[b][k]);
		printf("\n");
	}
	printf("\n");
	for (b = 0; b < kl; b++)
	{
		for (k = 0; k < br; k++)
			B[b][k] = A[k][b];
	}
	for (b = 0; b < kl; b++) 
	{
		for (k = 0; k < br; k++)
			printf("%2c", B[b][k]);
		printf("\n");
	}
 	return 0;
}
