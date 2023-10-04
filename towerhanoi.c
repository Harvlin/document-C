#include<stdio.h>
// Fungsi untuk memindahkan cakram dari satu tiang ke tiang lainnya
// Menggunakan tiang sumber, tujuan, dan bantuan
void hanoi(int n, char source, char destination, char auxiliary) {
	if (n == 1) {
		printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", source, destination);
		return;
	}
	// Memindahkan n - 1 cakram dari tiang sumber ke tiang bantuan, menggunakan tujuan sebagai tiang bantuan
	hanoi(n - 1, source, auxiliary, destination);
	printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, source, destination);
	// Memindahkan n - 1 cakram dari tiang bantuan ke tujuan, menggunakan sumber sebagai tiang bantuan
	hanoi(n - 1, auxiliary, destination, source);
}
int main()
{
	int numDiscs;
	printf("Masukkan jumlah cakram: "); scanf("%d", &numDiscs);
	hanoi(numDiscs, 'A', 'B', 'C');
 	return 0;
}