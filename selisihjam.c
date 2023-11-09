#include<stdio.h>
int main()
{
	int jam_awal, menit_awal, detik_awal;
	int jam_akhir, menit_akhir, detik_akhir;
	int selisih_jam, selisih_menit, selisih_detik;
	
	//Meminta input waktu awal
	printf("Masukkan Waktu Awal (HH : HM: SS): ");
	scanf("%d:%d:%d", &jam_awal, &menit_awal, &detik_awal);
	
	//Meminta input waktu akhir
	printf("Masukkan Waktu Akhir (HH : HM: SS): ");
	scanf("%d:%d:%d", &jam_akhir, &menit_akhir, &detik_akhir);
	
	//Menghitung selisih waktu
	selisih_detik = (detik_akhir - detik_awal + 60) % 60;
	selisih_menit = (menit_akhir - menit_awal + (detik_akhir < detik_awal ? 1 : 0) + 60) % 60;
	selisih_jam = jam_akhir - jam_awal + (menit_akhir < menit_awal || (menit_akhir == menit_awal && detik_akhir < detik_awal) ? 1 : 0);
	
	//Menampilkan hasil selisih waktu
	printf("Selisih waktu: %d jam %d menit %d detik", selisih_jam, selisih_menit, selisih_detik);
 	return 0;
}
