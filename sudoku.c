#include<stdio.h>
void delay();
int main()
{
	int n;
	printf("Masukkan angka bulat ganjil: ");
	scanf("%d", &n);
	
	if (n % 2 == 0) {
		printf("Input harus merupakan bilangan bulat ganjil");
		return 1;
	} 
	int matrix[n][n];
	
	// inisiasi matriks dengan nol
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = 0;
		}
	}
	
	int num;
	int row = 0, col = n / 2;
	for (num = 1; num <= n * n; num++) 
	{
		matrix[row][col] = num;
		
		row = (row - 1 + n) % n;
		col = (col - 1 + n) % n;
		
		if (matrix[row][col] != 0) {
			row = (row + 1) % n;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%6d", matrix[i][j]);
		}
		printf("\n");
	}
}
	
	            