#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
/*void cetakLarik(int ukuran, vector<int> larik)
{
	int i;
	for (i = 0; i < ukuran; i++)
	cout<<("") << larik[i] << endl;
}*/
int main()
{
	vector<int> bilangan;
	/*int i;
	for (i = 0; i < 10; i++)
	bilangan.push_back(i);
	cetakLarik(10, bilangan);*/
	bilangan.push_back(10);
	bilangan.push_back(20);
	bilangan.push_back(30);
	for (int i = 0; i < bilangan.size(); i++)
	{
		cout << bilangan[i] << endl;
	}
	return 0;
}