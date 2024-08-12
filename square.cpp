#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

bool hasAllDigit(long long n) {
	vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	while (n > 0) {
		int digit = n % 10;
		auto it = find(digits.begin(), digits.end(), digit);
		if (it != digits.end()) {
			digits.erase(it);
		}
		n /= 10;
	}
	return digits.empty();
}

bool checkSquare(long long n) {
	long long square = n * n;
	return hasAllDigit(square);
}

int main() {
	cout << "Bilangan hasil kuadrat antara 1 dan 40000 yang mengandung semua digit";
	for (int i = 1; i <= 40000; i++) {
		if (checkSquare(i)) {
			cout << "hasil " << i * i << endl;
		}
	}
}