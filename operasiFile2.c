#include<stdio.h>
int main()
{
	FILE *dt;
	int noakun;
	char nama[10];
	double pecahan;
	
	dt = fopen("data2.txt", "r");
	
	if ((dt = fopen("data2.txt", "r")) == NULL)
	{
		printf("Gagal buka file");
	} else {
		printf("%-5s%10s%s\n", "No akun", "Nama", "Saldo");
		fscanf(dt, "%d%s%lf", &noakun, nama, &pecahan);
		
		do {
			printf("%-5d%10s%7.2lf\n", noakun, nama, pecahan);
			fscanf(dt, "%d%s%lf", &noakun, nama, &pecahan);
		} while (!feof(dt));
		fclose(dt);
	}
 	return 0;
}
