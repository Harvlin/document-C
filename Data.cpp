#include<iostream>
using namespace std;
int main() {
	int D[3][5];
	int klm, brs;
	int jumlah[5];
	int max = 0;
	
	for (klm = 0; klm < 5; klm++) 
	{
		jumlah[klm] = 0;
		for (brs = 0; brs < 3; brs++)
		{
			cin >> D[brs][klm];	
			jumlah[klm] += (D[brs][klm] * 10);
		}
		if (max < jumlah[klm]) {
			max = jumlah[klm];
		}
		cout << endl;
	}
	
	for (brs = 0; brs <= 3; brs++)
	{
		if (brs < 3) {
			for (klm = 0; klm < 5; klm++)
			{
				cout << D[brs][klm] << "   ";
			}	
		} else {
			for (klm = 0; klm < 5; klm++)
				cout << jumlah[klm] << "  ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Max: " << max << endl;
	return 0;
}