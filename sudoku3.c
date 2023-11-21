#include<stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	int x, y;
	x = n / 2;
	y = 0;
	int A[n][n];
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			A[i][j] = 0;
		}
	}
	for (int i = 1; i <= n * n; i++) 
	{
		A[y][x] = i;
		y = y - 1;
		x = x + 1;
		if (y < 0 && x >= n) 
		{
			x--;
			y++;
		}
		if (y < 0) y = n;
		if (x > n) x = 0;
		if (A[x][x] != 0) 
		{
			x--; y ++;
		}	
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
 	return 0;
}
