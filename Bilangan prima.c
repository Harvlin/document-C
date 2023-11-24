#include<stdio.h>
#include<stdbool.h>1
#include<math.h>
bool isPrime (int num){
	if (num <= 1)
		return false;
	for (int i = 3; i < sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int bil; scanf(" %d", &bil);
	if (isPrime(bil)) {
		printf("YA");
	} else {
		printf("BUKAN");
	}
 	return 0;
}
