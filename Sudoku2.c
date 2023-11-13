#include<stdio.h>
void generateMagicSquare(int n) {
	int magicSquare[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			magicSquare[i][j] = 0;
		}
	}
	int i = n / 2;
	int j = n - 1;
	
	for (int num = 1; num <= n*n;) {
		if (i == -1 && j == n) {
			j = n - 2;
			i = 0;
		} else {
			// wrap around kolom
			if (j == n) {
				j = 0;
			}
			// wrap around baris
			if (i < 0) {
				i = n - 1;
			}
		}
		// jika sel sudah terisi, ubah posisi
		if (magicSquare[i][j] != 0) {
			j -= 2;
			i++;
			continue;
		} else {
			magicSquare[i][j] = num++;
		}
		j++;
		i--;
	}
	printf("Magic square for N = %d\nSum of each row/column/diagonal is %d\n\n", n, 	n * (n * n + 1) / 2);
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			printf("%3d", magicSquare[x][y]);
		}
		printf("\n");
	}
}
int main()
{
	int n; scanf("%d", &n);
	if (n % 2 == 0) {
		printf("Masukkan genap");
		return 1;
	}
	generateMagicSquare(n);
 	return 0;
}
