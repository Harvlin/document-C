#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n; // jumlah element array
	printf("Masukkan jumlah elemen dalam array: ");
	scanf("%d", &n);
	
	// Menggunakan malloc untuk mengalokasikan memori untuk array
	int *arr = (int *) malloc (n * sizeof(int));
	
	// Memeriksa apakah alokasi memori berhasil
	if (arr == NULL) {
		printf("Alokasi memori gagal\n");
		return 1; // Keluar dari kode kesalahan
	}
	
	// Mengisi array dengan data
	for (int i = 0; i < n; i++) {
		arr[i] = i * 2;
	}
	
	// Menampilkan isi array
	printf("Isi array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	free(arr);
 	return 0;
}
