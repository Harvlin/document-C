#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	struct {
		int Noin;
		char Nama[6];
		double nilai;
		char kelas[6];
	}data[100];
	int jdata, i;
	char ds[8];
	printf("Masukkan jumlah data: "); gets(ds);
	jdata = atoi(ds);
	for(i=0; i<=jdata-1; i++)
	{
		printf("Siswa ke %d : \n", i+1);
		printf("Nomor induk: "); gets(ds);
		data[i].Noin = atoi(ds);
		printf("Nama: "); gets(data[i].Nama);
		printf("Nilai: "); gets(ds);
		data[i].nilai = atoi(ds);
		printf("Kelas: "); gets(data[i].kelas);
	}
	printf("\n\n");
	for(i=0; i<=jdata-1; i++)
	{
		printf("%d %s %0.2lf %s\n", data[i].Noin, data[i].Nama, data[i].nilai, data[i].kelas);
	}
	
 	return 0;
}
