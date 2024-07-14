#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int baris;
	cin >> baris; 
	int n = 0;
	for (int i = 1; i <= baris; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < i; j++) {
				cout << setw(3) << n++;
			}
			cout << endl;
		} else {
			int temp = n + i - 1;
			for (int k = 0; k < i; k++) {
				cout << setw(3) << temp--;
			}
			n += i;
			cout << endl;
		}
	}
	return 0;
}