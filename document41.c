#include<stdio.h>
int main()
{
	int br, kl, A[100][100];
	scanf("%d %d", &br, &kl);
	int b, k;
	for (b = 0; b < br; b++) 
	{
		for (k = 0; k < kl; k++)
		{
			if (b == 0 || b == br - 1 || k == 0 || k == kl - 1) 
				A[b][k] = k + 1;
			else 
				A[b][k] = 0;
		}
	}
	for (b = 0; b < br; b++) 
	{
		for (k = 0; k < kl; k++)
			if (A[b][k] != 0)
				printf("%2d", A[b][k]);
			else 
				printf("%2s", "  ");
		printf("\n");
	}
	for (b = 0; b < kl; b++) 
	{
		for (k = 0; k < br; k++)
			if (A[k][b] != 0)
				printf("%2d", A[k][b]);
			else 
				printf("%2s", "  ");
		printf("\n");
	}
 	return 0;
}
