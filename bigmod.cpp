#include<iostream>
using namespace std;

long bigmod(long b, long p, long m) {
	if (p == 0) return 1;
	else if (p % 2 == 0) {
		long half = bigmod(b, p / 2, m);
		return (half * half) % m;
	} else {
		return ((b % m) * bigmod(b, p - 1, m)) % m;
	}
}

int main() {
	cout << bigmod(2, 5, 9) << endl;
	return 0;
}
