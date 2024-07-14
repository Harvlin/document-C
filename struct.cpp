#include<iostream>
#include<vector>
#include<iomanip>
#include<map>
#include<string>
using namespace std;

struct DataDr {
	int kd;
	string gd;
	int qn;
};

int main()
{
	vector <DataDr> dds;
	DataDr newData;
	
	int j;
	cout << "Baris data yang mau dimasukkan: ";
	cin >> j; 
	for (short i = 0; i < j; i++)
	{
		cout << "Kode desa: ";
		cin >> newData.kd;
		cout << "Gol Darah: ";
		cin.ignore();
		getline(cin, newData.gd);
		cout << "Jumlah liter: ";
		cin >> newData.qn;
		dds.push_back(newData);
	}
	
	cout << "\n" << setw(3) << "No" << setw(11) << "KodeDesa" << setw(11) << "GolDarah" << setw(8) << "Total" << endl;
	for (short i = 0; i < dds.size(); i++)
	{
		cout << setw(3) << i+ 1 << setw(11) << dds[i].kd << setw(11) << dds[i].gd << setw(8) << dds[i].qn << endl;
	}
	
	map<int, map<string, int>> sumVolumes;
	for (const auto & data : dds) 
	{
		sumVolumes[data.kd][data.gd] += data.qn;
	}
	cout << "Menampilkan total volume dari golongan darah dari setiap kode desa" << endl;
	for (const auto &pair1 : sumVolumes)
	{
		cout << "Kode desa: " << pair1.first << endl;
		for (const auto &pair2 : pair1.second) 
		{
			cout << "Gol darah: " << pair2.first << "\nTotal volume: " << pair2.second << endl;
		}
	}
	/*for (const auto &data : dds)
	{
		sumVolumes[data.kd] += data.qn;
	}
	cout << "\n";
	for (const auto & data : dds)
	{
		sumVolumes[data.ks][data.gd] += data.qn;
	}
	cout << "\n";
	cout << "Jumlah volume setiap desa" << endl;
	for (const auto &pair : sumVolumes)
	{
		cout << "Kode desa: " << pair.first << " Total volume: " << pair.second << endl;
	}*/
	return 0;
}