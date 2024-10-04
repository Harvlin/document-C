#include<iostream>
using namespace std;

int Func(unsigned long long n) {
	unsigned long long hasil = 1;
	while (n > 0) {
		hasil *= n;
		n--;
	}
	return hasil;
}

int main() {
	cout << Func(26);
	return 0;
}