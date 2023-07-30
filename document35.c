#include<stdio.h>
#include<string.h>
#define max 100
void hitung_karakter_dari(char kt[]);
int main()
{
	char kata1[max];
	gets(kata1);
	hitung_karakter_dari(kata1);
	for(int i = 0; i<strlen(kata1); i++){
		if (kata1[i] >= 97 && kata1[i] <=122){
			kata1[i] = kata1[i]-32;
			printf("%s\n", kata1);
		}
	}
	printf("%s\n", kata1);
 	return 0;
}
void hitung_karakter_dari(char kt[]){
	int i;
	static int kar[128];
	for (i = 0; i<strlen(kt); i++)
	{
		kar[kt[i]]++;
	}
	for (int n = 0; n<127; n++)
	{
		if(kar[n]!=0 && n!=32){	
			printf("%c = %d\n", n, kar[n]);
		}
		else if(kar[n] !=0 && n==32){
			printf("space=%d\n", kar[n]);
		}
	}
	
}
