#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> angka;
	
	angka.push_back(10);
	angka.push_back(20);
	angka.push_back(30);
	
	cout << "Indeks 0: " << angka[0] << endl;
	cout << "Indeks 1: " << angka[1] << endl;
	cout << "Indeks 2: " << angka[2] << endl;
	
	angka[1] = 25;
	
	angka.pop_back();
	
	cout << "Indeks 0: " << angka[0] << endl;
	cout << "Indeks 1: " << angka[1] << endl;
	cout << "Indeks 2: " << angka[2] << endl;
	cout << "Indeks 5: " << angka[5] << endl;
	cout << "Ukuran vektor: " << angka.size() << endl;
	
	angka.push_back(11);
	angka.push_back(22);
	angka.push_back(33);
	
	cout << "Indeks 0: " << angka[0] << endl;
	cout << "Indeks 1: " << angka[1] << endl;
	cout << "Indeks 2: " << angka[2] << endl;
	cout << "Indeks 3: " << angka[3] << endl;
	cout << "Indeks 4: " << angka[4] << endl;	
	cout << "Ukuran vektor: " << angka.size() << endl;
	
	return 0;
}
