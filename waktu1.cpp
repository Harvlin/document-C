#include<stdio.h>
int main()
{
	int hari, jam, menit, detik;
	printf("Input detik: ");
	scanf("%d", &detik);
	hari = detik / (24*3600);
	detik = detik%(24*3600);
	jam = detik / 3600;
	detik = detik%3600;
	menit = detik/60;
	detik = detik&60;
	
	/*
	
	tes
	*/
	
	printf("%-6s%2c%3d\n", "hari", ':', hari); 
	printf("%-6s%2c%3d\n", "jam", ':', jam);
	printf("%-6s%2c%3d\n", "menit", ':', menit);
	printf("%-6s%2c%3d\n", "detik", ':', detik);
 	return 0;
}
