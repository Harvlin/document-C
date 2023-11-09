#include<stdio.h>
#include<ctype.h>
#include<string.h>
enum jums {uppr, lowr, digt, nother};
int main()
{
	enum jums x;
	static int bnyk[4];
	char kt[] = "AAAAaaaa1234!@#$";
	for (int i = 0; i < strlen(kt); i++) {
		if (isupper(kt[i])) {
			bnyk[uppr] ++;
		} else if (islower(kt[i])) {
			bnyk[lowr] ++;
		} else if (isupper(kt[i])) {
			bnyk[digt] ++;
		} else {
			bnyk[nother] ++;
		}
	}
	printf("upper = %d ", bnyk[uppr]);
	printf("lowr = %d ", bnyk[lowr]);
	printf("digit = %d ", bnyk[digt]);
	printf("nother = %d ", bnyk[nother]);
 	return 0;
}
