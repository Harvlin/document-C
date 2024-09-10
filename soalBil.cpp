#include<iostream>
using namespace std;

int main() {
	int bil, counter = 0; 
	cin >> bil;
	cout << bil << "  ";
	while (bil != 1) {
		counter++;
		if (bil % 2 == 0) {
			bil = bil / 2;
		} else {
			bil = bil * 3 + 1;
		}
		cout << bil << "  ";
	}
	cout << endl << counter + 1;
	return 0;
}