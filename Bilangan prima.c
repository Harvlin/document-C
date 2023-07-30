#include<stdio.h>
#include<stdbool.h>
bool isPrime (int num){
	if (num <= 1)
		return false;
	for (int i = 2; i * i <= num; i++) {
		if (num %i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int bil;
	printf("Masukkan angka: ");scanf(" %d", &bil);
	if (isPrime(bil)) {
		printf("Prima");
	} else {
		printf("Bukan prima");
	}
		
 	return 0;
}
