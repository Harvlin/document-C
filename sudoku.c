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
	
	int num = 1;
	int row = 0, col = n / 2;
	
	while (num <= n * n) {
		matrix[row][col] = num;
		printf("[%d][%d] = %d\n", row, col, matrix[row][col]);
		delay();
		// posisi berikutnya (atas - kiri)
		int next_row = (row - 1 + n) % n;
		int next_col = (col - 1 + n) % n;
		
		
		if (matrix[next_row][next_col] == 0) {
			// jika selanjutnya belum diisi, pindah ke sana
			row = next_row;
			col = next_col;
		} else {
			// jika selanjutnya sudah diisi, pundah ke bawah
			row = (row + 1) % n;
		}
		num ++;
	}
	printf("\nMatrix %d x %d: \n", n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
 	return 0;
}
void delay() {
	for (int x = 1; x < 100000000; x++);
}
