#include<iostream>
#include<vector>
using namespace std;

int main() {
	int jumlahTelur; cin >> jumlahTelur;
	vector<int> Telor;
	vector<int> Box[4];
	static int Grade[4];
	for (int i = 0; i < jumlahTelur; i++) {
		int grade = rand() % 48 + 12;
		Telor[i] = grade;
		if (grade > 50) Grade[0]++;
		else if (grade > 35) Grade[1]++;
		else if (grade > 20) Grade[2]++;
		else Grade[3]++;
	}
	
	for (int i = 0; i < 4; i++)
		Box[i] = vector<int>(i);
	
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < Grade[i]; j++) {
			cout << Box[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}