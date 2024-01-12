#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct data {
		int noakun;
		char nama[10];
	  	double pecahan;
	}Data;
	
	FILE *dt;

	dt = fopen("text.txt", "r");
	
	if ((dt = fopen("text.txt", "r")) == NULL) {
		printf("Gagal");
	} else {
		printf("%-10s%-13s%s\n", "No akun", "Nama", "Saldo");
		
		fscanf(dt, "%d%s%lf", &Data.noakun, Data.nama, &Data.pecahan);
		while (!feof(dt)) {
			fscanf(dt, "%d%s%lf", &Data.noakun, Data.nama, &Data.pecahan);
			printf("%-10d%-13s%7.2lf\n", Data.noakun, Data.nama, Data.pecahan);
		}
		fclose(dt);
	}
 	return 0;
}
