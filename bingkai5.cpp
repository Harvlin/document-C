#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	string kata = "kota jakarta";
	int a = kata.size();
	int n = 0;
	for (int i = 0; i < sqrt(a); i++) {
		for (int j = 0; j < sqrt(a); j++) {
			cout << setw(4) << kata[n];
			n++;
		}
		cout << endl;
	}
	return 0;
}