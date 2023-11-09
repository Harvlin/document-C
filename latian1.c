#include<stdio.h>
#include<string.h>
int main() {
	char a[100] = {"JAMBI KOTA INDAH"}, b[100];
	/* for (int i = 0; i < strlen(a); i++) {
		b[i] = a[i];
	} */
	
	int i = 0;
	while (a[i] != '\0') {
		b[i] = a[i++];
	}
	b[i + 1] = '\0';
	printf("%s\n", b);
	
	/*
	int *angka; scanf("%d", angka);
	char *b;
	sprintf(b, "%d", angka);
	printf("%s", b);
	int *hasil;
	for (int i = 0; i < strlen(b); i++) {
		*hasil = b[i] - 48;
	}
	printf("%d", *hasil);
	*/

	int number;
	int product = 1;
	scanf("%d", &number);
	if (number == 0)
		return 0;
	while (number != 0) {
		int digit = number % 10;
		product *= digit;
		number /= 10;
	}
	printf("%d", product);
	
	return 0;
}
