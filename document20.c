#include<stdio.h>
#include<string.h>
int main()
{
	struct{
		char nama[20];
		int nis;
		double nilai;
		}siswa;
	strcpy(siswa.nama, "Wiliam");
	siswa.nis = 80;
	siswa.nilai = 9.27;
	printf("%s %d %0.2lf", siswa.nama, siswa.nis, siswa.nilai);
	return 0;
}