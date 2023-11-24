#include<stdio.h>
unsigned long long faktorial(int n) {
	unsigned long long hasil = 1;
	for (int i = 2; i <= n; i++) {
		hasil *= i;
	}
	return hasil;
}
int main(void) {
	int bil; scanf("%d", &bil);
	if (bil < 0) {
		return 1;
	} else {
		unsigned long long hasil = faktorial(bil);
		printf("%d", hasil);
	}
	return 0;
}