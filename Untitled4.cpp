#include<iostream>
using namespace std;

void asterisk(int p) {
	if (p > 1) 
		asterisk(p - 1);
	cout << "*";
}

void rekursif(int n) {
	if (n > 1)
		rekursif(n-1);
	asterisk(n);
	cout << endl;
}

void rekursif_mundur(int n) {
	asterisk(n - 1);
	cout << endl;
	if (n > 2) 
		rekursif_mundur(n - 1);
}

int main() {
	int n; 
	cout << "N: "; cin >> n;
	rekursif(n);
	rekursif_mundur(n);
	return 0;
}