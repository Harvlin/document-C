#include<stdio.h>
double segi4(double pj, double lb);
void garis(int n);
int main()
{
	double luas, panj, lbr;
	panj = 30.2;
	lbr = 20.7;
	luas = segi4(panj, lbr);
	garis(40);
	printf("Luas = %lf\n", luas);
	printf("Kota jambi \n");
	garis(90);
 	return 0;
}
void garis(int n)
{
	int i;
	for(i=1; i <= n; i++){
		printf("=");
	}
	printf("\n");
}
double segi4(double pj, double lb)
{
	return pj*lb;
}