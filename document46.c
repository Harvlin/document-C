#include<stdio.h>
#include<math.h>
int main() {
	int bulan;
	double pinjam;
	scanf("%d %lf", &bulan, &pinjam);
	double b = pinjam * pow(1 + 0.05, bulan);

	/*
	for (short i = 1; i <= bulan; i++)
	{
		b = bunga * pinjam + pinjam;
		pinjam = b;

		//percobaan 1
		//b = (bunga * pinjam) + pinjam;
		//pinjam = pinjam + b;

	}
	*/
	printf("%0.2lf", b);
	return 0;
}