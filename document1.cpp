#include<iostream>
#include<iomanip>
#include<unordered_map>
using namespace std;
int main()
{
	string kalimat;
	cout<< "Masukkan kalimat: ";
	getline(cin, kalimat);
	
	unordered_map<char, int> karakterCount;
	
	for (char karakter : kalimat)
	{
		karakterCount[karakter]++;
	}
	
	cout << "Jumlah kemunculan tiap karakter dalam kalimat:\n";
	for(const auto& pair : karakterCount)
	{
		cout << "'" << pair.first << "':" << pair.second << endl;
	}
	return 0;
}