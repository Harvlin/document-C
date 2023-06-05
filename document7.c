#include<stdio.h>
int main()
{
	int umur;
	printf("Umur: ");scanf("%d",&umur);
	if (umur < 5)
		printf("Balita");
	else if(umur < 14)
				printf("Anak");
	    else if(umur < 22)
					printf("Remaja");
				else if(umur < 61)
						printf("Dewasa");
					else
						printf("Lansia");
 	return 0;
}