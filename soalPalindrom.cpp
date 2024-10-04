#include<algorithm>
#include<iostream>
#include<cctype>
using namespace std;

bool palindrom(string &word) {
      int length = word.length();
      int i, j;
      for (i = 0, j = length - 1; i < j; i++, j--) {
            if (word[i] != word[j]) {
                  return false;
            }
      }
      return true;
}

void cekPalindrom(string exp) {
	bool semuaAngka = true;
	bool semuaHuruf = true;
	
	for (char c : exp) {
		if (!isdigit(c))
			semuaAngka = false;
		if (!isalpha(c))
			semuaHuruf = false;
	}
	
	if (semuaHuruf) {
		if (palindrom(exp)) 
			cout << "Kata palindrom";
		else 
			cout << "Bukan kata palindrom";
	} else if (semuaAngka) {
		if (palindrom(exp))
			cout << "Angka palindrom";
		else
			cout << "Bukan angka palindrom";
	} else {
		cout << "Kombinasi";
	}
}
 
int main() {
	string exp; cin >> exp;
	cekPalindrom(exp);
	return 0;
}