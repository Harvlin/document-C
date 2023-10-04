#include<string.h>
#include<stdio.h>
int cekpalindrom(int);
int main()
{
	int bil1, bil2, jm=0, max, min;
	scanf(" %d %d", &bil1, &bil2);
	max = bil1;
	for(int i = bil1; i<=bil2; i++)
	{
		if(cekpalindrom(i))
		{
			printf("%d ", i);
			jm++;
				if(i>max){
					max = i;	
				}
		}
	}
	int n;
	for(n = bil1; n<=bil2; n++)
	{
		if(cekpalindrom(n))
		{
			min = n;
			break;	
		}
	}
	printf("\njumlah: %d", jm);
	printf("\nMaksimum palindrom: %d", max);
	printf("\nMinumun palindrom: %d", min);
 	return 0;
}
int cekpalindrom(int n)
{
 	int i, jw;
		char stb[8];
		sprintf(stb, "%d", n);
		for(i=0; i<strlen(stb)/2; i++)
		{
			if(stb[i] != stb[strlen(stb)-i-1])
			{
				jw = 0;
				break;
			}
		}
		if(i==strlen(stb)/2)
			jw = 1;	
		return jw;
}