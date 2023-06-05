#include<stdio.h>
#include<string.h>
int main()
{
	char namabrg[6][15]={"BawangPutih", "Ketumbar", "Asam Jawa", "Kayu Manis", "Merica", "Lada Hitam"};
	int harga[6] = {20000, 18000, 10000, 25000, 22000, 30000};
	int i;
	printf("DAFTAR HARGA BARANG \n\n");
	printf("%3s %-15s%8s\n\n", "No", "Nama barang", "Harga/kg");
	for(i = 0; i < 6; i++)
	{
		printf("%3d %-15s%8d\n", i+1, namabrg[i], harga[i]);
	}
	int customer=0,no,quant,subtotal,b=0;
	char pilih, pil;
	struct data{
		int hrg, subtot, bnyk;
		char namabg[15];
	}belanja[6];
	do{
		printf("Customer %d:\n", customer+1);
		int total=0;
		do{
			
			printf("No barang : ");scanf(" %d",&no);
			printf("%s, Banyaknya: ", namabrg[no-1]);
			scanf(" %d", &quant);
			subtotal = quant * harga[no-1];
			printf("%s %d %d %d", namabrg[no-1], harga[no-1], quant, subtotal);
			
			strcpy(belanja[b].namabg, namabrg[no-1]);
			belanja[b].hrg = harga[no-1];
			belanja[b].bnyk = quant;
			belanja[b].subtot = subtotal;
			b++;
			
			total += subtotal;
		  	printf("\nMasih ada barang lagi atau tidak ? (y/t) ");
		  	scanf(" %c", &pilih);
		  	
		  }while(pilih != 't' );
		  printf("\n\n");
		  int i;
		  for(i=0; i < b; i++)
		  {
		  	printf("%2d %-15s%8d%4d%10d\n", i+1, belanja[i].namabg, belanja[i].hrg, belanja[i].bnyk, belanja[i].subtot);
		  }
		  printf("Jumlah dibayar: %d\n", total);
		  customer++;
		  printf("Masih ada customer lain ? (y/t) ");scanf(" %c", &pil);
	}while(pil != 't' );
 	return 0;
}
