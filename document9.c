#include<stdio.h>
int main()
{
	int bln, thn, jh;
	scanf("%d %d", &bln, &thn);
	switch (bln)
	{
		case 1: printf("Januari ");
			break;
		case 2: printf("Februari ");
			break;
		case 3: printf("Maret ");
			break;
		case 4: printf("april ");
			break;
		case 5: printf("Mei ");
			break;
		case 6: printf("Juni ");
			break;
		case 7: printf("Juli ");
			break;
		case 8: printf("Agustus ");
			break;
		case 9: printf("September ");
			break;
		case 10: printf("October");
			break;
		case 11: printf("November");
			break;
		case 12: printf("Desember");
			break;
		default: printf("Tak ada bulan %d", bln);
	}
	switch(bln)
	{
		case 1: case 3:
		case 5: case 7:
		case 8: case 10:
		case 12: jh=31;
			break;
		
		case 4: case 6: case 9: case 11: jh=30;
			break;
			
		case 2:{
			if(thn%100==0)
				jh = thn%400 ?29:28;
			else
				jh = thn%4==0 ?29:28;
			break;
		}
		default: jh=0;
			
	}
	if (bln > 0 && bln <= 12)
		if(bln==2)
			printf("Tahun %d jumlah harinya %d\n", thn, jh);
		else
			printf("Jumlah harinya %d", jh);
	else
		printf("jumlah harinya tidak ada");
 	return 0;
}
