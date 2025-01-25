#include<iostream>
using namespace std;

int Func(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * Func(n - 1);
	}
}

int main() {
	cout << Func(5);
	return 0;
}