#include<stdio.h>
int main()
{
	int bln;
	int jh;
	int thn;
	scanf("%d", &bln);
	if (bln < 8)
		if (bln%2==0)
			jh = 30;
		else
			jh = 31;
	else
		if (bln%2==0)
			jh = 31;
		else
			jh = 30;
			
	if (bln==2)
	{
		printf("Tahun: ");scanf("%d", &thn);
		if(thn%100==0)
			if(thn%400==0)
				jh = 29;
			else 
				jh = 28;
		else
			if(thn%4==0)
				jh = 29;
			else
				jh = 28;
	}
	printf("Bulan %d tahun %d jumlah hari %d \n", bln, thn, jh);
 	return 0;
}
