#include<stdio.h>
#include<string.h>
struct data {
	char nama[25];
	long int kelas;
	char kelompok;
	int nis;
};
int main()
{
	struct data smp;
	strcpy(smp.nama, "ARIO");
	smp.kelas = 9;
	smp.kelompok = 'B';
	smp.nis = 3258972;
	unsigned long long int a = 1234567890;
	printf("%llu\n", a);
	printf("Nama: %s\nKelas: %d\nKelompok: %c\nNis: %ld", smp.nama, smp.kelas, smp.kelompok, smp.nis);
 	return 0;
}
