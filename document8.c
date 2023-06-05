#include<stdio.h>
int main()
{
	int bln;
	int jh;
	int thn;
	scanf("%d", &bln);
	if (bln < 8)
		jh = bln%2==0 ? 30:31;
	else
		jh = bln%2==0 ? 31:30
			
	if (bln==2)
	{
		printf("Tahun: ");scanf("%d", &thn);
		if(thn%100==0)
			jh = thn%400==0 ? 29:28;
		else
			jh = thn%4==0 ? 29:28;
	}
	printf("Bulan %d tahun %d jumlah hari %d \n", bln, thn, jh);
 	return 0;
}
