#include<stdio.h>
void tukar(int *, int *);
void tampilkan(int n[]);

void tampilkan(int n[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\n");
}
int main()
{
	int A[5]= {8, 7, 3, 2, 6};
	tampilkan(A);
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(A[i] > A[j])
			{
				tukar(&A[i], &A[j]);
			}
		}
	}
	tampilkan(A);
 	return 0;
}
void tukar(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}