#include<iostream>
using namespace std;

int main() {
	int n = 86;
	for (int i = 1; i < 5; i++) {
		cout << i << " " << n << endl;
		n = n >> 1;
	}
	return 0;
}