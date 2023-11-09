#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	enum bulan {jan = 1, feb, mar, apr, mei, jun, jul, ags, sept, okt, nov, des};
	char *Nmbln[] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember" };
	
	for (enum bulan x = jan; x <= des; x++) {
		printf("bulan %d adalah %s\n", x, Nmbln[x]);
		tanggal(x);
		printf("\n")
	}
 	return 0;
}
void tanggal() {
	int bulan; scanf("%d", &bulan);
	if ()
}
