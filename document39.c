#include<stdio.h>
#include<string.h>
#include "test2.h" 
#define jm 100
int atoi();
int main()
{
	struct siswa 
	{	
		int nis, no;
		char nama[20];
		int nilai[3];
	};
	struct siswa data[jm];
	int i;
	char dm[6];
	for(i = 0; ; i++)
	{
		data[i].no = i+1;
		printf("No %2d ", data[i].no);
		printf("Nama : "); gets(data[i].nama);
		if (!strcmp(data[i].nama, "0000"))
			break;
		printf("Nis: "); gets(dm);
		data[i].nis = atoi(dm);
		
		for (int x = 0; x < 3; x++)
		{
			printf("Nilai %d: ", x+1);gets(dm);
			data[i].nilai[x] = atoi(dm);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int m = 0; m < i; m++)
	{
		printf("%2d %-8s %3d", data[m].no, data[m].nama, data[m].nis);
		for (int x = 0; x < 3; x++)
		{
			printf("%3d ", data[m].nilai[x]);
		}
		printf("\n");
	}
	return 0;
}
