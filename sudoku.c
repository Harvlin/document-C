#include <stdio.h>

void delay();
int main()
{
    int n;
	printf("Masukkan angka bulat ganjil: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("Input harus merupakan bilangan bulat ganjil\n");
		return 1;
	}

	int matrix[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = 0;
		}
	}

	int num;
	int row = 0, col = n / 2;
	for (num = 1; num <= n * n; num++) {
		matrix[row][col] = num;

		int next_row = (row - 1 + n) % n;
		int next_col = (col + 1) % n;

		if (matrix[next_row][next_col] != 0) {
			next_row = (row + 1) % n;
			next_col = col;
		}

		row = next_row;
		col = next_col;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%6d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}