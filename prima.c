#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n);
bool isPrime(int n)
{
	if (n == 1) {
		return false;
	}
	for (int i = 2; i * i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	printf("%d", isPrime(12345637));
 	return 0;
}
