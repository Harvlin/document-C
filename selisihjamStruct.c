#include<stdio.h>
struct Time {
	int jam;
	int menit;
	int detik;
};
struct Time bedawaktu (struct Time awal, struct Time akhir);

struct Time bedawaktu (struct Time awal, struct Time akhir) 
{
	struct Time beda;
	
	if (akhir.detik < awal.detik) {
		akhir.detik += 60;
		akhir.menit--;
	}
	
	beda.detik = akhir.detik - awal.detik;
	
	if (akhir.menit < awal.menit) {
		akhir.menit += 60;
		akhir.jam--;
	}
	
	beda.menit = akhir.menit - awal.menit;
	beda.jam = akhir.jam - awal.jam;
	
	return beda;
}

int main()
{
	struct Time awal, akhir, beda;
	printf("Awal:  "); scanf("%d %d %d", &awal.jam, &awal.menit, &awal.detik);
	printf("Akhir: "); scanf("%d %d %d", &akhir.jam, &akhir.menit, &akhir.detik);
	
	beda = bedawaktu(awal, akhir);
	printf("Selisih waktu:\n%d Jam\n%d Menit\n%d Detik", beda.jam, beda.menit, beda.detik);
	
	return 0;
}