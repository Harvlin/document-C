#include<stdio.h>
int main()
{
	struct nama {
		int tgl, bulan, tahun;
	};
	struct nama tglLahir = {1, 12, 2001};
	printf("%d %d %d\n", tglLahir.tgl, tglLahir.bulan, tglLahir.tahun);
 	return 0;
}
