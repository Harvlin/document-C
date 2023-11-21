#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *dt;
	int account;
	char name[30];
	double balance;
	dt = fopen("data.txt", "r");
	
	if ((dt = fopen("data.txt", "r")) == NULL) 
	{
		printf("File tidak bisa dibuka");
	} else 
	{
		printf("%-10s%-13s%s\n", "Nama", "nomor akun", "sisa uang");
		fscanf(dt, "%d%s%lf", &account, name, &balance);
		while (!feof(dt)) 
		{
			printf("%10s%13s%7.2f\n", account, name, balance);
			fscanf(dt, "%d%s%lf", &account, name, &balance);
		}
		fclose(dt);
	}
 	return 0;
}
