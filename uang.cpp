#include<bits/stdc++.h>
using namespace std;

int main() {
	int koin[] = {1, 3, 5};
	int size = sizeof(koin)/sizeof(koin[0]);
	sort(koin, koin + size, greater<int>());
	
	int uang; cin >> uang;
	int b[100];
	int total = 0;
	
	for (int i = 0; i < size; i++) {
		b[i] = uang / koin[i]; 
		uang = uang % koin[i];
		cout << koin[i] << " ada " << b[i] << endl;
		total += b[i];	
	}
	
	cout << total;
	return 0;
}