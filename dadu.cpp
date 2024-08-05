#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	int n; cin >> n;
	int ar[100];
	for (int i = 0; i < n; i++) {
		int n = rand() % 6 + 1;
		ar[i] = n;	
	}
	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++) {
		cout << ar[i];
	}
}